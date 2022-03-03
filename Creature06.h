#pragma once


#ifndef Creature06_H
#define Creature06_H

#include "ANIMATION_FRAME.h"
#include <vector>
#include <string>
#include <windows.h>
#include <iostream>

class Creature06 {
public:
	Creature06(HANDLE sharedScreen);
	void Animate();

private:
	std::vector<AnimationFrame> frames;
	HANDLE screen;
	void DrawCreature(int x, int y);
	void LoadAnimationFrames();

};


#endif
