#pragma once
#include<iostream>

/* Interface class or Abstract class */

	class IStratergyFly {
	public:
		virtual void fly() = 0;   //Pure virtual function . Defination in derived classes 
		//virtual ~IStratergyFly();      //Virtual Destructor to make sure where ever this class gets inherited distructor gets called or them too 
	};
