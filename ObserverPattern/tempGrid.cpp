#include"IObservable.h"


class TempGrid : public IObservable {
	int temperature;
	std::vector<IObserver*>vec;   //Observer list
	
public:

	void AddObserver(IObserver* observer)
	{
		vec.push_back(observer);
	}

	void RemoveObserver(IObserver*) {
		vec.pop_back();
	}

	void Notify();

	void setTemperature(int value) {
		this->temperature = value;
		Notify();
	}

	int GetTemperature() {
		return temperature;
	}
};

void IObservable::Notify() {
	for (int i = 0; i <= vec.size(); i++) {
		vec[i] = update();
	}
}