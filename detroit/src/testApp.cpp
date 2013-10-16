#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    detroit.allocate(ofGetWidth(),ofGetHeight(),OF_IMAGE_COLOR);
}

//--------------------------------------------------------------
void testApp::update(){
    unsigned char * pixels = detroit.getPixels();

    for(int y=0;y<detroit.height*3;y+=3)
        for(int x=0;x<detroit.width*3;x+=3){
            pixels[x+y*detroit.width] = x;
            pixels[1+x+y*detroit.width] = y;
            pixels[2+x+y*detroit.width] = x % (y+1) + 16*sin(ofGetFrameNum());
        }

    detroit.update();
}

//--------------------------------------------------------------
void testApp::draw(){
    detroit.draw(0,0);
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

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
