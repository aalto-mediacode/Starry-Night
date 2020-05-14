#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {

	//set the size of pixel and change parameter;
	size = 5;
	randomN = 2;
	randomS = 1;

	//import background and store it in array;
	background.load("noStarMoon.jpg");
	myPixels = background.getPixels();

	for (int x = 0; x < background.getWidth(); x += size) {
		for (int y = 0; y < background.getHeight(); y += size) {
			pos = { x, y };
			colour = myPixels.getColor(x, y);
			//cout << myPixels.getColor(x, y) << endl;
			posV.push_back(pos);
			colourM.push_back(colour);
		}
	}

	//import vortex1 and store it in array;
	vortex1.load("vortex1.png");
	vortex1Pixels = vortex1.getPixels();

	for (int x = 0; x < vortex1.getWidth(); x += size) {
		for (int y = 0; y < vortex1.getHeight(); y += size) {
			pos = { x, y };
			colour = vortex1Pixels.getColor(x, y);
			posVvortex1.push_back(pos);
			colourMvortex1.push_back(colour);
		}
	}

	//import vortex2 and store it in array;
	vortex2.load("vortex2.png");
	vortex2Pixels = vortex2.getPixels();

	for (int x = 0; x < vortex2.getWidth(); x += size) {
		for (int y = 0; y < vortex2.getHeight(); y += size) {
			pos = { x, y };
			colour = vortex2Pixels.getColor(x, y);
			posVvortex2.push_back(pos);
			colourMvortex2.push_back(colour);
		}
	}

	//import star1 and store it in array;
	star1.load("star1.png");
	star1Pixels = star1.getPixels();

	for (int x = 0; x < star1.getWidth(); x += size) {
		for (int y = 0; y < star1.getHeight(); y += size) {
			pos = { x, y };
			colour = star1Pixels.getColor(x, y);
			//cout << myPixels.getColor(x, y) << endl;
			posVstar1.push_back(pos);
			colourMstar1.push_back(colour);
		}
	}

	//import moon and store it in array;
	moon.load("moon.png");
	moonPixels = moon.getPixels();

	for (int x = 0; x < moon.getWidth(); x += size) {
		for (int y = 0; y < moon.getHeight(); y += size) {
			pos = { x, y };
			colour = moonPixels.getColor(x, y);
			posVmoon.push_back(pos);
			colourMmoon.push_back(colour);
		}
	}

	//import front and store it in array;
	front.load("front.png");
	frontPixels = front.getPixels();

	for (int x = 0; x < front.getWidth(); x += size) {
		for (int y = 0; y < front.getHeight(); y += size) {
			pos = { x, y };
			colour = frontPixels.getColor(x, y);
			posVfront.push_back(pos);
			colourMfront.push_back(colour);
		}
	}

	//import star2 and store it in array;
	star2.load("star2.png");
	star2Pixels = star2.getPixels();

	for (int x = 0; x < star2.getWidth(); x += size) {
		for (int y = 0; y < star2.getHeight(); y += size) {
			pos = { x, y };
			colour = star2Pixels.getColor(x, y);
			posVstar2.push_back(pos);
			colourMstar2.push_back(colour);
		}
	}

	//import star3 and store it in array;
	star3.load("star3.png");
	star3Pixels = star3.getPixels();

	for (int x = 0; x < star3.getWidth(); x += size) {
		for (int y = 0; y < star3.getHeight(); y += size) {
			pos = { x, y };
			colour = star3Pixels.getColor(x, y);
			posVstar3.push_back(pos);
			colourMstar3.push_back(colour);
		}
	}

	//import star4 and store it in array;
	star4.load("star4.png");
	star4Pixels = star4.getPixels();

	for (int x = 0; x < star4.getWidth(); x += size) {
		for (int y = 0; y < star4.getHeight(); y += size) {
			pos = { x, y };
			colour = star4Pixels.getColor(x, y);
			posVstar4.push_back(pos);
			colourMstar4.push_back(colour);
		}
	}

	//import star5 and store it in array;
	star5.load("star5.png");
	star5Pixels = star5.getPixels();

	for (int x = 0; x < star5.getWidth(); x += size) {
		for (int y = 0; y < star5.getHeight(); y += size) {
			pos = { x, y };
			colour = star5Pixels.getColor(x, y);
			posVstar5.push_back(pos);
			colourMstar5.push_back(colour);
		}
	}
	//import star6 and store it in array;
	star6.load("star6.png");
	star6Pixels = star6.getPixels();

	for (int x = 0; x < star6.getWidth(); x += size) {
		for (int y = 0; y < star6.getHeight(); y += size) {
			pos = { x, y };
			colour = star6Pixels.getColor(x, y);
			posVstar6.push_back(pos);
			colourMstar6.push_back(colour);
		}
	}
}

//--------------------------------------------------------------
void ofApp::update() {

	//flow go left
	if (opacity1 == 1) {
		
		glm::vec2 mouseV = { mouseX, mouseY };
		int mouseVinPixel = ((mouseX - (mouseX % 12)) / size) * (ofGetHeight() / size) + ((mouseY - (mouseY % 12)) / size);
		//cout << mouseVinPixel << endl;
		//ofColor cc = colourM[mouseVinPixel];

		//setup particle
		for (int i = 0; i < 100; i++) {
			particle newParticle;
			newParticle.setup(mouseV);
			myParticle.push_back(newParticle);
		}

		//update particle
		for (int i = 0; i < myParticle.size(); i++) {
			myParticle[i].update();
			if (myParticle[i].posV.x < 10) {
				myParticle.erase(myParticle.begin() + i);
				//cout << myParticle.size() << endl;
			}
		}

	}

	
	
	
	//Set opacity;
	if (ofGetFrameNum() < 20) {
		opacity3 = 0.05*ofGetFrameNum();
	}
	else {
		opacity3 = 1;
	}

	if (ofGetFrameNum() < 40) {
		opacity1 = 0.025*ofGetFrameNum();
	}
	else {
		opacity1 = 1;
	}

	if (ofGetFrameNum() < 60) {
		opacity2 = 0.05*(ofGetFrameNum()-40);
	}
	else {
		opacity2 = 1;
	}

	if (ofGetFrameNum() < 1000) {
		speed = 0.01*ofGetFrameNum();
	}
	else {
		speed = 1;
	}


	
}

//--------------------------------------------------------------
void ofApp::draw() {

	//draw background (picture +pixels); 
	ofSetColor(255);
	background.draw(0, 0);

	for (int i = 0; i < posV.size(); i++) {
		ofSetColor(colourM[i]);
		ofDrawCircle(posV[i].x+ofRandom(-randomN, randomN), posV[i].y + ofRandom(-randomN, randomN), size/ 2);
	}

	// draw vortex2 pixels and make it rotate;
	ofPushMatrix();
	ofTranslate(685, 384);
	ofRotate(ofGetFrameNum() * 3);
	for (int i = 0; i < posVvortex2.size(); i++) {
		ofSetColor(colourMvortex2[i], opacity3*colourMvortex2[i].a);
		ofDrawCircle(posVvortex2[i].x - vortex2.getWidth() / 2 + ofRandom(-randomS, randomS), posVvortex2[i].y - vortex2.getHeight() / 2 + ofRandom(-randomS, randomS), size / 1.8);
	}
	ofPopMatrix();

	// draw vortex1 pixels and make it rotate;
	if (ofGetFrameNum() > 0) {                                                     //start time
		ofPushMatrix();
		ofTranslate(504, 274);
		ofRotate(ofGetFrameNum() * 3);
		for (int i = 0; i < posVvortex1.size(); i++) { 
			ofSetColor(colourMvortex1[i], opacity1*colourMvortex1[i].a );           //slow in 
	
			ofDrawCircle(posVvortex1[i].x - vortex1.getWidth() / 2 + ofRandom(-randomS, randomS), posVvortex1[i].y - vortex1.getHeight() / 2 + ofRandom(-randomS, randomS), size / 1.8);
		}
		ofPopMatrix();
	}

	//draw star1 pixels and make it rotate;
	if (ofGetFrameNum() > 40) {
		ofPushMatrix();
		ofTranslate(363, 423);
		ofRotate(ofGetFrameNum() * 3);
		for (int i = 0; i < posVstar1.size(); i++) {
			ofSetColor(colourMstar1[i], opacity2*colourMstar1[i].a);
			ofDrawCircle(posVstar1[i].x - star1.getWidth() / 2 + ofRandom(-randomS, randomS), posVstar1[i].y - star1.getHeight() / 2 + ofRandom(-randomS, randomS), size / 1.8);
		}
		ofPopMatrix();
	}

	//draw star4 pixels and make it rotate;
	if (ofGetFrameNum() > 40) {
		ofPushMatrix();
		ofTranslate(355,35);
		ofRotate(ofGetFrameNum() * 3);
		for (int i = 0; i < posVstar4.size(); i++) {
			ofSetColor(colourMstar4[i], opacity2*colourMstar4[i].a);
			ofDrawCircle(posVstar4[i].x - star4.getWidth() / 2 + ofRandom(-randomS, randomS), posVstar4[i].y - star4.getHeight() / 2 + ofRandom(-randomS, randomS), size / 1.8);
		}
		ofPopMatrix();
	}
	
	//draw star5 pixels and make it rotate;
	ofPushMatrix();
	ofTranslate(624, 72);
	ofRotate(ofGetFrameNum() * 3);
	for (int i = 0; i < posVstar5.size(); i++) {
		ofSetColor(colourMstar5[i], opacity1*colourMstar5[i].a);
		ofDrawCircle(posVstar5[i].x - star5.getWidth() / 2 + ofRandom(-randomS, randomS), posVstar5[i].y - star5.getHeight() / 2 + ofRandom(-randomS, randomS), size / 1.8);
	}
	ofPopMatrix();
		
	

	//draw star6 pixels and make it rotate;
	if (ofGetFrameNum() > 40) {
		ofPushMatrix();
		ofTranslate(722, 185);
		ofRotate(ofGetFrameNum() * 3);
		for (int i = 0; i < posVstar6.size(); i++) {
			ofSetColor(colourMstar6[i], opacity2*colourMstar6[i].a);
			ofDrawCircle(posVstar6[i].x - star6.getWidth() / 2 + ofRandom(-randomS, randomS), posVstar6[i].y - star6.getHeight() / 2 + ofRandom(-randomS, randomS), size / 1.8);
		}
		ofPopMatrix();
	}

	//Flow to left;
	for (int i = 0; i < myParticle.size(); i++) {
	myParticle[i].draw();
	}

	//draw moon pixels and make it move;
	ofPushMatrix();
	ofTranslate(100 - speed*100, 100 - speed * 100);
	for (int i = 0; i < posVmoon.size(); i++) {
		ofSetColor(colourMmoon[i], opacity3*colourMmoon[i].a);
		ofDrawCircle(posVmoon[i].x + 780 + ofRandom(-randomN, randomN), posVmoon[i].y + ofRandom(-randomN, randomN), size / 2);
	}
	if (ofGetFrameNum() > 50) {
		for (int i = 0; i < posVmoon.size(); i++) {
			ofSetColor(colourMmoon[i], opacity3*colourMmoon[i].a);
			ofDrawCircle(posVmoon[i].x + 780 + ofRandom(-randomN, randomN), posVmoon[i].y + ofRandom(-randomN, randomN), size / 2);
		}
	}
	ofPopMatrix();
	
	//Draw star2 and make it blink;
	if (ofGetFrameNum() > 50) {
		for (int i = 0; i < posVstar2.size(); i++) {
			ofSetColor(colourMstar2[i], 0.8*sin(ofGetFrameNum() / 2)*colourMstar2[i].a);
			ofDrawCircle(posVstar2[i].x + 74 + ofRandom(-randomN, randomN), posVstar2[i].y + 6 + ofRandom(-randomN, randomN), size / 1.8);
		}
	}
	
	//Draw star3 and make it blink;
	if (ofGetFrameNum() > 50) {
		for (int i = 0; i < posVstar3.size(); i++) {
			ofSetColor(colourMstar3[i], 0.8*cos(ofGetFrameNum() / 2)*colourMstar3[i].a);
			ofDrawCircle(posVstar3[i].x + 213 + ofRandom(-randomN, randomN), posVstar3[i].y + 104 + ofRandom(-randomN, randomN), size / 1.8);
		}
	}

	//Draw star4(replace the farest one) and make it blink;
	if (ofGetFrameNum() > 50) {
		for (int i = 0; i < posVstar4.size(); i++) {
			ofSetColor(colourMstar4[i], cos((ofGetFrameNum()+10) / 2)*colourMstar4[i].a);
			ofDrawCircle(posVstar4[i].x + 80 + ofRandom(-randomN, randomN), posVstar4[i].y + 340 + ofRandom(-randomN, randomN), size / 1.8);
		}
	}
	
	//Draw front;
	for (int i = 0; i < posVfront.size(); i++) {
		ofSetColor(colourMfront[i]);
		ofDrawCircle(posVfront[i].x + ofRandom(-randomN, randomN), posVfront[i].y + ofRandom(-randomN, randomN), size / 1.8);
	}
	

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
