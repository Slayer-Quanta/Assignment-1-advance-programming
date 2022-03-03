#pragma once

#ifndef Creature04_H
#define Creature04_H

#include "ANIMATION_FRAME.h"
#include <vector>
#include <string>
#include <windows.h>
#include <iostream>

class Creature04 {
public:
	Creature04(HANDLE sharedScreen);
	void Animate();

private:
	std::vector<AnimationFrame> frames;
	HANDLE screen;
	void DrawCreature(int x, int y);
	void LoadAnimationFrames();

};


#endif
