#include "testApp.h"
ofImage myImage;
bool colorize;

//--------------------------------------------------------------
void testApp::setup(){
    myImage.loadImage("puppies.png");
    colorize = false;
}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){
    ofBackground(0);
    if(colorize){
        ofSetColor(127,0,127);
    } else {
        ofSetColor(255);
    }
    for(int i=10;i>1;i--){
        myImage.draw(mouseX-myImage.width/2,mouseY-myImage.height/2,myImage.width*i/10,myImage.height*i/10);
    }
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){
    switch (key)
    {
        case 'f':
            ofToggleFullscreen();
            break;
        case 'c':
            colorize = ! colorize;
            break;
    }

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}
