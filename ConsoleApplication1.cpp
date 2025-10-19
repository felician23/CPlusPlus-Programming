#include <iostream>
using namespace std;

int main() {
	cout << " Convert from fahrenheit to celsius: ";
	int value;
	cin >> value;
	double temp = (value - 32) * 5 / 9;
	cout << temp;
	return 0;
}