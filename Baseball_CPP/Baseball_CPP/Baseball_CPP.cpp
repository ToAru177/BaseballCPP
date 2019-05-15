#include <iostream>
#include <cstring>
#include "Answer.h"
#include "Guess.h"
#include "Result.h"


using namespace std;

int main()
{
	Answer answer;
	answer.Generate();

	answer.Print();

	Guess guess;

	while (true) {

		guess.Input();

		guess.Print();

		Result result;
		result.Calculate(answer, guess);
		cout << result.GetPrintString() << endl;
		if (result.IsCorrect())
			break;
	}
}