#include "codeeditor.h"
#include "QPainter"
#include <QMouseEvent>
#include <QDesktopServices>
#include <QTextBlock>
#include <QTextCursor>
#include <QTextDocument>
#include <QRegularExpression>

CodeEditor::CodeEditor(QWidget *parent) : QPlainTextEdit(parent)
{
    // 初始化正则表达式，用于检测 URL 和邮件地址
    urlRegex.setPattern(R"(\b(?:https?|ftp|file)://[-A-Za-z0-9+&@#/%?=~_|!:,.;]*[-A-Za-z0-9+&@#/%=~_|]|mailto:[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\.[A-Z]{2,})");
    urlRegex.setPatternOptions(QRegularExpression::CaseInsensitiveOption);


    lineNumberArea = new LineNumberArea(this);

    connect(this, &CodeEditor::blockCountChanged, this, &CodeEditor::updateLineNumberAreaWidth);
    connect(this, &CodeEditor::updateRequest, this, &CodeEditor::updateLineNumberArea);
    connect(this, &CodeEditor::cursorPositionChanged, this, &CodeEditor::highlightCurrentLine);
    connect(this,&CodeEditor::textChanged,this,&CodeEditor::onTextChanged);

    updateLineNumberAreaWidth(0);
    highlightCurrentLine();
}

void CodeEditor::mousePressEvent(QMouseEvent *event)
{
    QPlainTextEdit::mousePressEvent(event);
    cursor = textCursor();
    cursor.setPosition(cursor.position(), QTextCursor::MoveAnchor);
}

void CodeEditor::mouseReleaseEvent(QMouseEvent *event)
{
    QPlainTextEdit::mouseReleaseEvent(event);
    QTextCursor cursor = textCursor();
    cursor.setPosition(cursor.position(), QTextCursor::KeepAnchor);

    QString selectedText = cursor.selectedText();
    QRegularExpressionMatch match = urlRegex.match(selectedText);
    if (match.hasMatch()) {
        clickedUrl = QUrl(match.captured());
        QDesktopServices::openUrl(clickedUrl);
    }
}

void CodeEditor::setTextChanged(bool value)
{
    textIsChanged = value;
}

void CodeEditor::setFilePath(const QString &fileName)
{
    filePath = fileName;
}

int CodeEditor::lineNumberAreaWidth()
{
    int digits = 1;
    int max = qMax(1, blockCount());
    while (max >= 10) {
        max /= 10;
        ++digits;
    }

    int space = 3 + fontMetrics().horizontalAdvance(QLatin1Char('9')) * digits;

    return space;
}

void CodeEditor::updateLineNumberAreaWidth(int /* newBlockCount */)
{
    setViewportMargins(lineNumberAreaWidth(), 0, 0, 0);
}

void CodeEditor::updateLineNumberArea(const QRect &rect, int dy)
{
    if (dy)
        lineNumberArea->scroll(0, dy);
    else
        lineNumberArea->update(0, rect.y(), lineNumberArea->width(), rect.height());

    if (rect.contains(viewport()->rect()))
        updateLineNumberAreaWidth(0);
}

void CodeEditor::hideLineNumberArea(bool flag)
{
    if(flag){
        lineNumberArea->hide();
        setViewportMargins(0, 0, 0, 0);
    } else {
        lineNumberArea->show();
        setViewportMargins(lineNumberAreaWidth(), 0, 0, 0);
    }
}

void CodeEditor::resizeEvent(QResizeEvent *e)
{
    QPlainTextEdit::resizeEvent(e);

    QRect cr = contentsRect();
    lineNumberArea->setGeometry(QRect(cr.left(), cr.top(), lineNumberAreaWidth(), cr.height()));
}

void CodeEditor::highlightCurrentLine()
{
    QList<QTextEdit::ExtraSelection> extraSelections;

    if (!isReadOnly()) {
        QTextEdit::ExtraSelection selection;

        QColor lineColor = QColor(Qt::yellow).lighter(160);

        selection.format.setBackground(lineColor);
        selection.format.setProperty(QTextFormat::FullWidthSelection, true);
        selection.cursor = textCursor();
        selection.cursor.clearSelection();
        extraSelections.append(selection);
    }

    setExtraSelections(extraSelections);
}

void CodeEditor::lineNumberAreaPaintEvent(QPaintEvent *event)
{
    QPainter painter(lineNumberArea);
    painter.fillRect(event->rect(), Qt::red);
    QTextBlock block = firstVisibleBlock();
    int blockNumber = block.blockNumber();
    int top = qRound(blockBoundingGeometry(block).translated(contentOffset()).top());
    int bottom = top + qRound(blockBoundingRect(block).height());
    while (block.isValid() && top <= event->rect().bottom()) {
        if (block.isVisible() && bottom >= event->rect().top()) {
            QString number = QString::number(blockNumber + 1);
            painter.setPen(Qt::black);
            painter.drawText(0, top, lineNumberArea->width(), fontMetrics().height(),
                             Qt::AlignRight, number);
        }

        block = block.next();
        top = bottom;
        bottom = top + qRound(blockBoundingRect(block).height());
        ++blockNumber;
    }
}

//重写 textChanged() 方法
void CodeEditor::onTextChanged()
{
    // QPlainTextEdit::textChanged(); // 调用基类的 textChanged() 方法
    emit textChanged1(); // 发出信号
}
