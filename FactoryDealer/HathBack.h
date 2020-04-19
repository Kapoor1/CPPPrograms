#pragma once
#include<iostream>
#include"ICarType.h"

class HathBack : public ICarType {
public: 
	HathBack(){}
	void DisplayCarType() {
	std::cout << "I am hath-back Type" << "\n";
}

};