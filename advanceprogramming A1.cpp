// advanceprogramming A1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <string>
#include <windows.h>
#include "Creature.h"
#include "Creature02.h"
#include "Creature03.h"
#include "Creature04.h"
#include "Creature05.h"
#include "Creature06.h"

int main()
{
	HANDLE screen = GetStdHandle(STD_OUTPUT_HANDLE);

	  Creature creature(screen); 
	creature.Animate();

	  Creature02 creature02(screen);
	creature02.Animate();

	  Creature03 creature03(screen);
	creature03.Animate();

	  Creature04 creature04(screen);
	creature04.Animate();

	  Creature05 creature05(screen);
	creature05.Animate();

	  Creature06 creature06(screen);
	creature06.Animate();

	return 0;
}