#include "ofMain.h"
#include "ofApp.h"
#include <iostream>

//========================================================================
int main( ){
	ofSetupOpenGL(1024,768,OF_WINDOW);			// <-------- setup the GL context

	// this kicks off the running of my app
	// can be OF_WINDOW or OF_FULLSCREEN
	// pass in width and height too:

	cout<<"Hello from main"<<endl;
	ofRunApp(new ofApp());

}
