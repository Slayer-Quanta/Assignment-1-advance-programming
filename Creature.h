#pragma once

#ifndef Creature_H
#define Creature_H

#include "ANIMATION_FRAME.h"
#include <vector>
#include <string>
#include <windows.h>
#include <iostream>

class Creature {
public:
	Creature(HANDLE sharedScreen);
	void Animate();

private:
	std::vector<AnimationFrame> frames;
	HANDLE screen;
	void DrawCreature(int x, int y);
	void LoadAnimationFrames();

};


#endif
