#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    img.loadImage("image.png");
    ofSetWindowShape(img.width*2, img.height);
}

//--------------------------------------------------------------
void testApp::update(){
    unsigned char * origPixels = img.getPixels();
    unsigned char * newPixels = imgMod.getPixels();

    int w = img.width;
    int h = img.height;

    for (int x = 0; x < w; x++){
        for(int y = 0; y < h; y++){
            int ne = (y-1) * w + (x+1);
            int n_ = (y-1) * w + (x+0);
            int nw = (y-1) * w + (x-1);
            int w_ = (y+0) * w + (x-1);
            int sw = (y+1) * w + (x-1);
            int s_ = (y+1) * w + (x+0);
            int se = (y+1) * w + (x+1);
            int e_ = (y+0) * w + (x+1);
            int me = (y+0) * w + (x+0);

            newPixels[me] = -1 * origPixels[ne] +
                            -1 * origPixels[n_] +
                            -1 * origPixels[nw] +
                            -1 * origPixels[w_] +
                            -1 * origPixels[sw] +
                            -1 * origPixels[s_] +
                            -1 * origPixels[se] +
                            -1 * origPixels[e_] +
                             9 * origPixels[me];

        }
    }
    imgMod.update();
}

//--------------------------------------------------------------
void testApp::draw(){
    img.draw(0,0);
    imgMod.draw(img.width,0);
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
