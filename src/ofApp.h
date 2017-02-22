#ifndef _TEST_APP
#define _TEST_APP

#include "ofMain.h"
#include "rectangle.h"
#include "circle.hpp"
#include "triangle.hpp"
#define CIRCLE 30
#define TRIANGLE 60

class ofApp : public ofSimpleApp{

	public:

		void setup();
		void update();
		void draw();
        void mouseMoved(int x, int y);
    

		rectangle myRectangle;
        circle myCircle[CIRCLE];
        triangle myTriangle[TRIANGLE];
};

#endif
