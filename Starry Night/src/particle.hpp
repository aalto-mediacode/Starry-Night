#pragma once

#include "ofMain.h"

class particle {

	public:
		void setup(glm::vec2 originV);
		void update();
		void draw();

		glm::vec2 posV;
		glm::vec2 velocityV1;
		glm::vec2 velocityV2;
		glm::vec2 velocityV3;
		ofColor color;

		float distance;

		ofImage colourBar;
		ofPixels colourPixels;
};