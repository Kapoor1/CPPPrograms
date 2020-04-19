#pragma once
#include"StratergyFly_Wild.h"
#include"StratergyFly_Normal.h"

class Context_Stratergie_Goose {
	IStratergyFly* m_fly;      //null pointer of stratergy_Interface 

public:
	Context_Stratergie_Goose(IStratergyFly* Fnormal = nullptr) : m_fly(Fnormal)  //Paramertized constructor with Initializer list
	{
		//this->m_fly = Fnormal;
	}

	~Context_Stratergie_Goose() {
		delete m_fly;
	}

	void set_Stratergy(IStratergyFly* Fnormal) {
		delete this->m_fly;
		this->m_fly = Fnormal;
	}

	void HowtoFly()const {
		std::cout << "how Goose fly"<<std::endl;
		this->m_fly->fly();

	}
};
