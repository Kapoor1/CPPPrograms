#pragma once
#include<iostream>
#include"ICarType.h"

class Sedan :public ICarType {
public: 
	Sedan(){}
	void DisplayCarType() {
	std::cout << "I am Sedan Type" << "\n";
}

};