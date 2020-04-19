#pragma once
#include<iostream>

class IObserver {
	int temp;
	virtual void update() = 0;
};