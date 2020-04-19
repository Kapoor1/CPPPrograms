#pragma once
#include<iostream>
#include<time.h>
#include"Bark.h"
#include"BarkRecognizer.h"
#include<vector>

class DogDoor {

public: bool isOpen = false;
public: std::vector<std::string>Vstring;

public: void doorOpen() {
	std::cout << "DogDorr is Open, your dog is allowed to access the door" << std::endl;
	isOpen = true;
	setTimer(10);
}

public: void doorClose() {
	std::cout << "DogDorr is closed" << std::endl;
	isOpen = false;
}

public: void setTimer(int time)
{
	int i = time;
	std::cout << "timer activated to close the door automaticly" << "\n";
	while (i){
		i--;
}
		doorClose();
}
		
public: setallowedBark() {

		}
public: Bark* getallowedBark(std::string) {
	//std::vector<std::string> bark;
	//bark.push_back("WOOF");
	//bark.push_back("Baoo");
	//bark.push_back("Boo");
	//bark.push_back("aooo");

 }
};