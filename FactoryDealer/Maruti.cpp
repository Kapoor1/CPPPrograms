#pragma once
#include<iostream>
#include"IFactory.h"


class Maruti :public IFactory {
public:
	Maruti() { std::cout << "Lets Drive Maruti" << "\n"; }
	ICarType* CreateHathBack() {
		return new HathBack();
	}
		ICarType* CreateSedan() {
		return new Sedan();
	}

};