#pragma once

#include "ofMain.h"
#include "particle.hpp"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		
		vector <particle> myParticle;
		glm::vec2 pos;
		ofColor colour;
		float size;
		float randomN;
		float randomS;
		float opacity1;
		float opacity2;
		float opacity3;
		float speed;
	

		//image
		ofImage background;
		ofImage star1;
		ofImage vortex1;
		ofImage vortex2;
		ofImage moon;
		ofImage star2;
		ofImage star3;
		ofImage star4;
		ofImage star5;
		ofImage star6;
		ofImage front;


		//pixels
		ofPixels myPixels;
		ofPixels star1Pixels;
		ofPixels vortex1Pixels;
		ofPixels vortex2Pixels;
		ofPixels moonPixels;
		ofPixels star2Pixels;
		ofPixels star3Pixels;
		ofPixels star4Pixels;
		ofPixels star5Pixels;
		ofPixels star6Pixels;
		ofPixels frontPixels;

		
		vector<glm::vec2> posV;
		vector<glm::vec2> posVstar1;
		vector<glm::vec2> posVvortex1;
		vector<glm::vec2> posVvortex2;
		vector<glm::vec2> posVmoon;
		vector<glm::vec2> posVstar2;
		vector<glm::vec2> posVstar3;
		vector<glm::vec2> posVstar4;
		vector<glm::vec2> posVstar5;
		vector<glm::vec2> posVstar6;
		vector<glm::vec2> posVfront;

		vector<ofColor> colourM;
		vector<ofColor> colourMstar1;
		vector<ofColor> colourMvortex1;
		vector<ofColor> colourMvortex2;
		vector<ofColor> colourMmoon;
		vector<ofColor> colourMstar2;
		vector<ofColor> colourMstar3;
		vector<ofColor> colourMstar4;
		vector<ofColor> colourMstar5;
		vector<ofColor> colourMstar6;
		vector<ofColor> colourMfront;

};
