#include "particle.hpp"

//--------------------------------------------------------------
void particle::setup(glm::vec2 originV) {
	originV = { 408,185 };
	posV.x = originV.x + ofRandom(-15,15);
	posV.y = originV.y + ofRandom(-50, 50);
	velocityV1 = { -15,5};//改为随机数

	distance = originV.x;
	velocityV2 = { -15,ofRandom(-5,0) };
	velocityV3 = { -15,ofRandom(-12,8) };

	colourBar.load("colourBar.jpg");
	colourPixels = colourBar.getPixels();
	color = colourBar.getColor(ofRandom(0,colourBar.getWidth()),ofRandom(0, colourBar.getHeight()));
}

//--------------------------------------------------------------
void particle::update() {

	if (distance - posV.x < 230) {
		posV += velocityV1;
		//cout << posV.x << endl;
	}
	else if(distance - posV.x <290) {
		posV += velocityV2;
	}
	else {
		posV += velocityV3;
	}
	
}

//--------------------------------------------------------------
void particle::draw() {
	ofSetColor(color,200);
	ofDrawCircle(posV, 2.5);
}

