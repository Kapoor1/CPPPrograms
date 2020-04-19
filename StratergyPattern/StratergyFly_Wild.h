#pragma once
#include"IStratergyFly.h"



class StratergyFly_Wild :public IStratergyFly {
public:
	void fly() {
		std::cout << "fly like wild goose " << std::endl;   //function defination for Interface class
	}
	~StratergyFly_Wild() { std::cout << "Wild Destructor called" << std::endl; }
};

