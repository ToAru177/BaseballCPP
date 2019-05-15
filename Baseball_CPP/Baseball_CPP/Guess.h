#pragma once
#include "NumberContainer.h"
#include "Constant.h"

class Guess : public NumberContainer
{
private:
	Constant constant;
public:
	Guess();
	~Guess();

	void Input(void) {
		int num;
		for (int i = 0; i < constant.Digit; i++)
		{
			cin >> num;
			numbers.push_back(num);
		}
	}

	int Length(void) {
		return numbers.size();
	}

	int operator[](int idx) {
		return numbers[idx];
	}

	// [] 연산자 오버로드
	int operator[](int idx) const {
		return numbers[idx];
	}

	string GetPrintPrefix(void) {
		return "[추측]";
	}

};

