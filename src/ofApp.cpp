#include "ofApp.h"
#include <fstream>


void ofApp::setup(){
     auto name = std::getenv("myfile");
     auto filename = name? name: "input.jpg";
	
     img.load(filename);
 	
     x = abs(img.getWidth() - ofGetWidth())/2;
     y = abs(img.getHeight() - ofGetHeight())/2;

    
cout<<"Hello from setup"<<endl;

}


//--------------------------------------------------------------
void ofApp::update(){

}
//--------------------------------------------------------------
void ofApp::draw(){

ofBackground(0);
img.draw(x,y);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

    if (key == 'i') 
          { 
 
           
           img.update();
           }//end if

cout<<"A key has been pressed"<< "key"<<endl;
cout<<"i has been pressed"<< "i"<<endl;
}


//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}

