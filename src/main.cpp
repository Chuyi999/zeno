#include "ofMain.h"
#include "ofApp.h"
#include "ofAppGlutWindow.h"

//========================================================================
int main( ){
    ofAppGlutWindow window;
	ofSetupOpenGL(&window, 1024,768, OF_WINDOW);			// <-------- setup the GL context

	// this kicks off the running of my app
	// can be OF_WINDOW or OF_FULLSCREEN
	// pass in width and height too:
	ofRunApp( new ofApp());
}
////Add two new classes of objects to zenos:   Red Circles & Orange Triangles

//Make each object move at a different speed by passing the float for catchUpSpeed to the constructor.

//Use FBO to make each object leave trails.

//Remove easing for the Triangles.  They should move max 2px per update.

//Write your own simple addon to the existing easing function.  Ex: Use an if statement & make the circles take 50 steps to get up to speed.
