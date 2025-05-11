#include <iostream>
using namespace std;

long long factorial(int number) {
	//fool-proof
	if (number < 0) {
		return 0;
	}
	//base
	if (number <= 1) {
		return 1;
	}
	//recursion case
	return number * factorial(number - 1);
}

int main() {
	int number;

	cout << "Input number: ";
	cin >> number;

	cout << number << "! = " << factorial(number) << endl;
	return 0;
}
158661