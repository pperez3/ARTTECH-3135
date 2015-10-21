#pragma once


#include "ofMain.h"
#include "BaseParticle.h"


class SphereParticle: public BaseParticle {
public:
	virtual void draw() {
        ofFill();
        ofSetColor(255, 255, 0, 127);
        ofDrawSphere(position, 40);
	}
	
};


class CubeParticle: public BaseParticle {
public:
	virtual void draw() {
        ofFill();
        ofSetColor(255, 255, 255, 127);
        ofDrawBox(position, 40);
	}
	
};


