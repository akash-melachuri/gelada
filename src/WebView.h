#ifndef WEBVIEW_H
#define WEBVIEW_H

#include <QWebEngineView>
#include <QKeyEvent>

class WebView : public QWebEngineView {
    public:
        WebView(QWidget* parent = 0) : QWebEngineView(parent) {}
};

#endif
