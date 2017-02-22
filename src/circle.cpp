#include "circle.hpp"


//------------------------------------------------------------------
circle::circle(){
    catchUpSpeed = 0.05f;
}

//------------------------------------------------------------------
void circle::setup() {
    x = ofRandom(0,ofGetWidth());
    y = ofRandom(0,ofGetHeight());
  
}
void circle::draw() {
    ofFill();
    ofSetRectMode(OF_RECTMODE_CENTER); // center around the position
    ofSetColor(223,2,2);
    ofCircle(pos.x, pos.y, 10);
}
void circle::update() {
}
//------------------------------------------------------------------
void circle::zenoToPoint(float catchX, float catchY){
    if ( pos.x >500 & pos.y < 500){
    pos.x = catchUpSpeed * catchX + (1-catchUpSpeed) * pos.x;
    pos.y = catchUpSpeed * catchY + (1-catchUpSpeed) * pos.y;
    }else{
    pos.x = pos.x+(catchX- pos.x)/ofDist(pos.x, pos.y, catchX, catchY);
    pos.y = pos.y+(catchY- pos.y)/ofDist(pos.x, pos.y, catchX, catchY);
    }
}
