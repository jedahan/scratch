#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    takeBG = false;
    grabber.initGrabber(320,240);
    colorImage.allocate(320,240);
    grayImage.allocate(320,240);
    bg.allocate(320,240);
    diffImage.allocate(320,240);
    ofSetWindowShape(grabber.getWidth()*4, grabber.getHeight());
}

//--------------------------------------------------------------
void testApp::update(){
    grabber.update();

    if(grabber.isFrameNew()){
        colorImage.setFromPixels(grabber.getPixels(),320,240);
        grayImage = colorImage;
        grayImage.flagImageChanged();

        if(takeBG){
            bg = grayImage;
            takeBG = false;
        }

        diffImage.absDiff(bg, grayImage);
    }
}

//--------------------------------------------------------------
void testApp::draw(){
    colorImage.draw(0,0);
    grayImage.draw(colorImage.width,0);
    bg.draw(colorImage.width*2,0);
    diffImage.draw(colorImage.width*3,0);
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){
    if(key==' '){
        takeBG = true;
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
