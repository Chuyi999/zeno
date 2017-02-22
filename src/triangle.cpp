#include "triangle.hpp"


//------------------------------------------------------------------
triangle::triangle(){
    catchUpSpeed = 2;
}

//------------------------------------------------------------------
void triangle::draw() {
    ofFill();
    ofSetRectMode(OF_RECTMODE_CENTER); // center around the position
    ofSetColor(223,150,2);
    ofDrawTriangle(pos.x, pos.y, pos.x+10, pos.y+20, pos.x-20, pos.y+30);
}

//------------------------------------------------------------------
void triangle::zenoToPoint(float catchX, float catchY){
//    pos.x = catchUpSpeed * catchX + (1-catchUpSpeed) * pos.x;
//    pos.y = catchUpSpeed * catchY + (1-catchUpSpeed) * pos.y;
    pos.x = pos.x+(catchX- pos.x)/ofDist(pos.x, pos.y, catchX, catchY);
    pos.y = pos.y+(catchY- pos.y)/ofDist(pos.x, pos.y, catchX, catchY);
    
}
