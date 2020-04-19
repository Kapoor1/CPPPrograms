#pragma once
#include<Iostream>

class GuitarSpec {
	{
	public:
		Guitar() {};
		~Guitar() {};

	private:
		std::string S_Number;
		double price;

	};
};

enum Builder{};
enum Model{};
enum Type{};
enum Wood{};