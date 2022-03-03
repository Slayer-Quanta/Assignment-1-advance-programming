#include "Creature03.h"
#include <iostream>
#include <fstream>
#include <string>
Creature03::Creature03(HANDLE sharedScreen)
{
	screen = sharedScreen;
	LoadAnimationFrames();
}
void Creature03::Animate()
{
	for (int i = 0; i < frames.size(); i++) 
	{
		system("CLS");
		AnimationFrame frame = frames[i]; 
		DrawCreature(frame.x, frame.y); 
		Sleep(1000);
	}
}
void Creature03::DrawCreature(int x, int y)
{
	COORD line1 = { x, y };  
	SetConsoleCursorPosition(screen, line1);
	std::cout << "   \_____)\_____\n";
	COORD line2 = { x, y + 1 };
	SetConsoleCursorPosition(screen, line2);
	std::cout << "    / --v____ __`<\n";
	COORD line3 = { x, y + 2 };
	SetConsoleCursorPosition(screen, line3);
	std::cout << "            )/\n";
}
void Creature03::LoadAnimationFrames()
{
	std::string xStr; 
	std::string yStr;
	std::ifstream myfile("CreatureMovements.txt"); 
	if (myfile.is_open())
	{
		while (true)
		{
			if (!getline(myfile, xStr)) 
				break;
			if (!getline(myfile, yStr))
				break;
			int x = stoi(xStr);
			int y = stoi(yStr); 
			AnimationFrame frame;
			frame.x = x;
			frame.y = y;
			frames.push_back(frame);
		}
		myfile.close();
	}


}
