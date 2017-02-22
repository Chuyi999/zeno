#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "ofMain.h"

class triangle {
    
public:
    
    triangle();
    
    void	draw();
    void	zenoToPoint(float catchX, float catchY);
    
    ofPoint		pos;
    float		catchUpSpeed;		// take this pct of where I want to be, and 1-catchUpSpeed of my pos
};

#endif // TRIANGLE_H
