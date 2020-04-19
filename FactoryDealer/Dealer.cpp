
#include"IFactory.h"
#include"ICarType.h"
#include"HathBack.h"
#include"Sedan.h"
#include"Maruti.cpp"
#include"TataMotors.cpp"

class Dealer {
	IFactory* factory;

public:
	Dealer(IFactory* f) :factory(f) {}

void DisplayCarType() {
	ICarType* type = factory->CreateHathBack();
	type->DisplayCarType();
	createCarSedan();
	createCarHathback();
}
void createCarSedan() {
	ICarType* w = {
		factory->CreateSedan()
	};
	w->DisplayCarType();
}
void createCarHathback() {
	ICarType* w = {
		factory->CreateHathBack()
	};
	w->DisplayCarType();
}
};

int main()
{
	IFactory* factory;

	factory = new Maruti;




	Dealer *D = new Dealer(factory);
		D->createCarHathback();
		D->createCarSedan();

		factory = new TataMotors;

}

