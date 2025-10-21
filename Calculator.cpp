#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {
	cout << "Welcome to the best calculator" << endl;
	cout << "Please enter your numbers to begin: " << endl;
	double firstNum;
	string operand;
	double secNum;
	cin >> firstNum;
	cin >> operand;
	cin >> secNum;
	if (operand == "+") {
		cout << firstNum + secNum;
	}
	else if (operand == "-") {
		cout << firstNum - secNum;
	}
	else if (operand == "*") {
		cout << firstNum * secNum;
	}
	else if (operand == "/") {
		cout << firstNum / secNum;
	}
}