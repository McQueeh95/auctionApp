#ifndef WINDOWCONTROLLER_H
#define WINDOWCONTROLLER_H
#include "widget.h"
class WindowContoller{
private:
    Widget* main;
    WindowContoller() = default;
public:
    static WindowContoller& instance(){
        static WindowContoller instance;
        return instance;
    }
    void setMain(Widget* widget){
        main = widget;
    }
    void showMain(){
        main->show();
    }
    void hideMain(){
        main->hide();
    }
};

#endif // WINDOWCONTROLLER_H
