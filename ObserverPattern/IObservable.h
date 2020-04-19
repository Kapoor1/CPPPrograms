#pragma once
#include<iostream>
#include<vector>
#include"IObserver.h"

class IObservable {
	std::vector<IObserver*>vec;
	IObserver* observer;
public:
	virtual void AddObserver(IObserver*) = 0;
    virtual void RemoveObserver(IObserver*) = 0;
	virtual void Notify() = 0;
};
