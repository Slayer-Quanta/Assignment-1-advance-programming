#pragma once
// / \_ / \
// (  o.o )
//   > ^ <

#ifndef Creature02_H
#define Creature02_H

#include "ANIMATION_FRAME.h"
#include <vector>
#include <string>
#include <windows.h>
#include <iostream>

class Creature02 {
public:
	Creature02(HANDLE sharedScreen);
	void Animate();

private:
	std::vector<AnimationFrame> frames;
	HANDLE screen;
	void DrawCreature(int x, int y);
	void LoadAnimationFrames();

};


#endif
