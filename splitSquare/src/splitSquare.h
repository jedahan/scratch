#pragma once

#include "ofMain.h"

class splitSquare {
public:
    float x, y, w;
    ofColor color;

    vector<splitSquare> children;

    void split(int x,int y);

    void setup(float _x, float _y, float _w);
    void draw();
};