#pragma once
#include<iostream>
#include"Bark.h"
#include"DogDoor.h"
#include<vector>

class BarkRecognizer
{
	DogDoor* door;

public:

	BarkRecognizer(DogDoor* Door) : door(Door) {}

	void recognizeBark(Bark* bark) {
		std::cout << "Bark heard" << bark->getSound() << "\n";
		
	}
};