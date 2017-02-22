#include "ofApp.h"
#include "ofMain.h"
ofFbo fbo;



//--------------------------------------------------------------
void ofApp::setup(){
    
    
    
	// macs by default run on non vertical sync, which can make animation very, very fast
	// this fixes that: 
	ofSetVerticalSync(true);
    
    

	// set background: 
	ofEnableAlphaBlending();
	ofBackground(0);

	// set the position of the rectangle:
	myRectangle.pos.x = 100;
	myRectangle.pos.y = 50;
    
    // set the position of the circle:
    for(int i= 0;i<CIRCLE;i++){
    myCircle[i].pos.x = 150+i*50;
    myCircle[i].pos.y = 300+i*20;
    }
    // set the position of the circle:
    for(int i= 0;i<TRIANGLE;i++){
    myTriangle[i].pos.x = 800+i*20;
    myTriangle[i].pos.y = 650+i*90;
    }
    //fbo
    fbo.allocate(ofGetWidth(),ofGetHeight(),GL_RGBA32F);
    fbo.begin();
    ofClear(255,255,255,0);
    fbo.end();
}

//--------------------------------------------------------------
void ofApp::update(){
	myRectangle.zenoToPoint(mouseX, mouseY);
    
     for(int i= 0;i<CIRCLE;i++){
    myCircle[i].update();
    myCircle[i].zenoToPoint(mouseX+i*20, mouseY);
     }
    for(int i= 0;i<TRIANGLE;i++){
    myTriangle[i].zenoToPoint(mouseX, mouseY);
    }
    int mouseX = 0;
    int mouseY = 0;
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    fbo.begin();
    ofSetColor(0,0,0,10);
    ofDrawRectangle(0, 0, ofGetWidth(), ofGetHeight());
    ofSetColor(0,0,255);
    
    myRectangle.draw();
    
    for(int i=0; i<CIRCLE; i++){
        myCircle[i].draw();
    }
    for(int i= 0;i<TRIANGLE;i++){
    myTriangle[i].draw();
    }
    fbo.end();
    ofSetColor(255, 255, 255);
    fbo.draw(0,0);
}
void ofApp::mouseMoved(int x,int y){
    mouseX = x;
    mouseY = y;
}

