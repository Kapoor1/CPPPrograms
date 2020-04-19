#pragma once
#include<iostream>
#include"IFactory.h"



class TataMotors :public IFactory {
public:
	TataMotors() { std::cout << "Lets Drive TataMotors" << "\n"; }
	ICarType* CreateHathBack() {
		return new HathBack();
	}
	ICarType* CreateSedan() {
		return new Sedan();
	}

};
