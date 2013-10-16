#include "splitSquare.h"

void splitSquare::setup(float _x, float _y, float _w){
    x = _x;
    y = _y;
    w = _w;
    color.set(ofRandom(255),ofRandom(255),ofRandom(255));
}

void splitSquare::draw(){
    if(children.size()){
        for(splitSquare& s: children){
            s.draw();
        }
    } else {
        ofSetColor(color);
        ofFill();
        ofRect(x, y, w, w);
    }
}

void splitSquare::split(int x,int y) {
    if(children.size()){
        for(splitSquare& s: children){
            s.split(x,y);
        }
    } else {
        splitSquare temp;
        children.push_back(temp);
        children.push_back(temp);
        children.push_back(temp);
        children.push_back(temp);
        children[0].setup(0,0,w/2);
        children[1].setup(w/2,0,w/2);
        children[2].setup(0,w/2,w/2);
        children[3].setup(w/2,w/2,w/2);
    }
}