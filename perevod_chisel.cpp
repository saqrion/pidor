#include "pch.h"
#include <iostream>

using namespace std;

int binar(int number) {
	int i = 0, k = 0, tmp, ost;
	int *array = new int[i];
	while (number > 0)
	{
		ost = number % 2;
		number = number / 2;
		if (ost == 0) tmp = 0;
		else tmp = 1;
		i++;
		k++;
		array[i] = tmp;
	}
	for (i = k; i > 0; i--) {
		cout << array[i];
	}
	return(number);
}

int main() {
	int number;
	cout << "Input number" << endl;
	cin >> number;
	binar(number);
}