#include <iostream>
using namespace std;

int fibonacci(int index);


int main() {
	int index;

	cout << "Input index: ";
	cin >> index;

	cout << "Resalt: " << fibonacci(index) << endl;
	return 0;
}