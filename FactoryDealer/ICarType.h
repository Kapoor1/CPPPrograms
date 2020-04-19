#pragma once
#include<iostream>

class ICarType {
public:
	//car type can be huthback or sidan
	virtual void DisplayCarType() = 0;
};