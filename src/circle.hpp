#ifndef CIRCLE_H
#define CIRCLE_H

#include "ofMain.h"

class circle {
    
public:
    
    circle();
     void setup();
    void update();
    void	draw();
    void	zenoToPoint(float catchX, float catchY);
    
    ofPoint		pos;
    float		catchUpSpeed;// take this pct of where I want to be, and 1-catchUpSpeed of my pos
    float x;
    float y;
    float dim;
};

#endif // CIRCLE_H
