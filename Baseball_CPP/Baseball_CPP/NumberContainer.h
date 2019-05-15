#pragma once
#include <iostream>
#include <cstring>
#include <vector>
using namespace std;
class NumberContainer
{
private:
protected: vector<int> numbers;

public:


	//vector<int> numbers;

	virtual string GetPrintPrefix(void) = 0;
	//virtual string GetPrintPrefix(void) { return };

	void Print() {

		cout << GetPrintPrefix() << endl;
		
		for (int i = 0; i < numbers.size(); i++)
		{
			cout << numbers[i] << ' ';
		}
		cout << endl;
	}

	NumberContainer();
	~NumberContainer();
};

