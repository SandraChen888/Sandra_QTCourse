#ifndef CODEEDITOR_H
#define CODEEDITOR_H

#include <QObject>
#include <QPlainTextEdit>
#include <QString>

class CodeEditor : public QPlainTextEdit
{
    Q_OBJECT

public:
    CodeEditor(QWidget *parent = nullptr);
    QString filePath = "";
    bool textIsChanged = false;
    void setTextChanged(bool value);
    void setFilePath(const QString &fileName);

    void lineNumberAreaPaintEvent(QPaintEvent *event);
    int lineNumberAreaWidth();

signals:
    void textChanged1(); // 定义一个信号

protected:
    void resizeEvent(QResizeEvent *event) override;

private slots:
    void updateLineNumberAreaWidth(int newBlockCount);
    void highlightCurrentLine();
    void updateLineNumberArea(const QRect &rect, int dy);

    void onTextChanged();
public slots:
    void hideLineNumberArea(bool flag);

private:
    QWidget *lineNumberArea;
};

class LineNumberArea : public QWidget
{
public:
    LineNumberArea(CodeEditor *editor) : QWidget(editor), codeEditor(editor)
    {}

    QSize sizeHint() const override
    {
        return QSize(codeEditor->lineNumberAreaWidth(), 0);
    }

protected:
    void paintEvent(QPaintEvent *event) override
    {
        codeEditor->lineNumberAreaPaintEvent(event);
    }

private:
    CodeEditor *codeEditor;
};
#endif // CODEEDITOR_H
