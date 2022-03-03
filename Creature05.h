#pragma once

#ifndef Creature05_H
#define Creature05_H

#include "ANIMATION_FRAME.h"
#include <vector>
#include <string>
#include <windows.h>
#include <iostream>

class Creature05 {
public:
	Creature05(HANDLE sharedScreen);
	void Animate();

private:
	std::vector<AnimationFrame> frames;
	HANDLE screen;
	void DrawCreature(int x, int y);
	void LoadAnimationFrames();

};


#endif
