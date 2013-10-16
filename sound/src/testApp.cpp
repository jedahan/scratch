#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    sound.loadSound("mysound.mp3");
    sound.setVolume(0.5f);
    sound.play();
}

//--------------------------------------------------------------
void testApp::update(){
    ofSoundUpdate();
}

//--------------------------------------------------------------
void testApp::draw(){
    ofBackground(255,255,255);
    ofDrawBitmapString("HI", 0, 0);
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){
    sound.play();
    switch(key){
        case 'a':
            soundA.play();
            break;
        case 'b':
            soundB.play();
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
