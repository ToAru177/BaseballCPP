#pragma once
#include "Constant.h"
#include "Answer.h"
#include "Guess.h"
#include <cstring>

#define _CRT_SECURE_NO_WARNINGS

using namespace std;

class Result
{
private:

	Constant constant;

	int strike;
	int ball;
	int out;

public:
	Result() : strike(0), ball(0), out(0) {
	
	}

	~Result() {

	}

	bool IsCorrect(void) {
		return strike == constant.Digit;
	}

	void Calculate(Answer answer, Guess guess) {
		for (int i = 0; i < constant.Digit; i++)
		{
			int j = (i + 1) % constant.Digit;
			int k = (i + 2) % constant.Digit;

			if (answer[i] == guess[i] && answer[j] == guess[j] && answer[k] == guess[k])
				strike++;

			else if (answer[i] == guess[i] || answer[j] == guess[j] || answer[k] == guess[k])
				ball++;

			else
				out++;
		}
	}

	string GetPrintString() {
		char str[50];
		sprintf_s(str,50, "Strike : %d, Ball : %d, Out : %d", strike, ball, out);
		return str;
	}

};

