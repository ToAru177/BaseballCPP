#pragma once

#include "NumberContainer.h"
#include "Constant.h"
#include <ctime>
#include <iostream>
#include <vector>

using namespace std;

class Answer : public NumberContainer
//class Answer
{
private:
	Constant constant;
	//vector<int> numbers;

public:
	Answer();
	~Answer();

	void Generate(void) {

		while (true) {
			srand(time(NULL));
			for (int i = 0; i < constant.Digit; i++)
				numbers.push_back(rand() % constant.Max_Value + 1);
			
			if (numbers[0] != numbers[1] && numbers[1] != numbers[2] && numbers[2] != numbers[0])
				break;
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
		return "[정답]";
	}
};

