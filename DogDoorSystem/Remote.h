#pragma once
#include<iostream>
#include"DogDoor.h"

class Remote : public DogDoor {
private: DogDoor *door;

public:Remote(DogDoor* Door) : door(Door) {}

public:void ButtonPress() {
	if(door->isOpen)
	{
		std::cout << "Door is allreadyopen" << std::endl;
	}
	else
		door->doorOpen();
}

};

