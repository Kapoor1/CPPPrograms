#pragma once
#include<iostream>
#include"ICarType.h"
#include"HathBack.h"
#include"Sedan.h"

class IFactory{
public:
	virtual ICarType* CreateSedan() = 0;
	virtual ICarType* CreateHathBack() = 0;
};