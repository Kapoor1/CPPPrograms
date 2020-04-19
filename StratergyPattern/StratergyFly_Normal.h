#pragma once
#include"IStratergyFly.h"


class StratergyFly_Normal : public IStratergyFly {
	public :
		void fly() {
			std::cout << "fly like Normal goose " << std::endl; //function Defination for interface class
	     }
	~StratergyFly_Normal() { std::cout << "Normal Destructor called" << std::endl; }
};
