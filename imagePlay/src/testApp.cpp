#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    img.loadImage("SALVADOR-DALI-010.jpg");
    sampleWidth=10;
    sampleHeight=10;
    ofSetWindowShape(img.getWidth(), img.getHeight());
    ofFill();
}

//--------------------------------------------------------------
void testApp::update(){
}

//--------------------------------------------------------------
void testApp::draw(){
    unsigned char * pixels = img.getPixels();

    for(int y=0; y<img.getHeight();y+=sampleHeight){
        for(int x=0; x<img.getWidth(); x+=sampleWidth){
            float red = 0;
            float green = 0;
            float blue = 0;
            for(int j=y; j < y+sampleHeight && j < img.getHeight()/sampleHeight; j++){
                for(int i=x; i < x+sampleWidth && i < img.getWidth()/sampleWidth; i++){
                    int index = 3 * (j*img.getWidth()+i);
                    red += pixels[index];
                    green += pixels[index+1];
                    blue += pixels[index+2];
                }
            }
            red /= sampleWidth*sampleHeight;
            green /= sampleWidth*sampleHeight;
            blue /= sampleWidth*sampleHeight;
            ofSetColor(red, green, blue);
            ofRect(x,y,sampleWidth,sampleHeight);
        }
    }
    ofSetColor(255);
    ofDrawBitmapString("(" + ofToString(mouseX) + "," + ofToString(mouseY) + ")", mouseX, mouseY);
    ofDrawBitmapString("(" + ofToString(sampleWidth) + "," + ofToString(sampleHeight) + ")", mouseX, mouseY+20);
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){
    sampleWidth = sampleHeight = ofMap(x, 0, img.getWidth(), 1, 32, true);
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
