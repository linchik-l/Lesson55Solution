#include <iostream>
using namespace std;

void test(int count) {
	if (count <= 0) {
		return;
	}
	cout << "testing..." << endl;
	count--;
	test(count);
}

int main() {
	int count;

	cout << "Input count: ";
	cin >> count;
	test(count);
	return 0;
}