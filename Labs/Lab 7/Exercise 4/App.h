#ifndef APP_H
#define APP_H

#include <iostream>

class Rect {
public:
    float x, y, w, h;
    //Default constructor
    Rect() : x(0.0f), y(0.0f), w(0.0f), h(0.0f) {}
   // Rect() : x(0), y(0), w(0), h(0) {}
    Rect(float x, float y, float w, float h) : x(x), y(y), w(w), h(h) {}
};

class AppWindow {
protected:
    Rect rect;

public:
    AppWindow() : rect() {}
    AppWindow(float x, float y, float w, float h) : rect(x, y, w, h) {}
    AppWindow(const Rect& r) : rect(r) {}

    const Rect& get_rect() {
        return rect;
    }

    virtual void resize(int w, int h) {
        rect.w = w;
        rect.h = h;
    }
};

class CircleWin : public AppWindow {
protected:
    float radius;

public:
    CircleWin() : radius(0) {}
    CircleWin(float x, float y, float w, float h) : AppWindow(x, y, w, h) {
        radius = (w > h) ? w : h;
    }
    CircleWin(const Rect& r) : AppWindow(r) {
       if (r.w > r.h) {
        radius = r.w;
    } else {
        radius = r.h;
    }
    }

    void resize(int w, int h) override {
        AppWindow::resize(w, h);
        if (w > h) {
        radius = w;
    } else {
        radius = h;
    }
        std::cout << "radius: " << radius << std::endl;
    }
};

class RectWin : public AppWindow {
protected:
    float area;

public:
    RectWin() : area(0) {}
    RectWin(float x, float y, float w, float h) : AppWindow(x, y, w, h) {
        area = w * h;
    }
    RectWin(const Rect& r) : AppWindow(r) {
        area = rect.w * rect.h;
    }

    void resize(int w, int h) override {
        AppWindow::resize(w, h);
        area = w * h;
        std::cout << "area: " << area << std::endl;
    }
};

#endif
