#ifndef CODEEDITOR_H
#define CODEEDITOR_H

#include <QObject>
#include <QPlainTextEdit>
#include <QString>
#include <QTextDocument>
#include <QTextCursor>
#include <QRegularExpression>

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

    // 书签功能
    void saveBookmarks(const QString &filePath);
    void loadBookmarks(const QString &filePath);

signals:
    void textChanged1(); // 定义一个信号

protected:
    void resizeEvent(QResizeEvent *event) override;

    void mousePressEvent(QMouseEvent *event) override;
    void mouseReleaseEvent(QMouseEvent *event) override;

private slots:
    void updateLineNumberAreaWidth(int newBlockCount);
    void highlightCurrentLine();
    void updateLineNumberArea(const QRect &rect, int dy);

    void onTextChanged();
public slots:
    void hideLineNumberArea(bool flag);

private:
    QWidget *lineNumberArea;

    QRegularExpression urlRegex;
    QTextCursor cursor;
    QUrl clickedUrl;

    // 书签存储
    QMap<int, QString> bookmarks;
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
