#include <iostream>
using namespace std;

void userCalculationAddition(int num) {

}
void userCalculationSubtraction(int num) {

}
void userCalculationMultiplication(int num) {

}
void userCalculationSubtraction(int num) {

}

int main()
{
	int userNum;
	cout << "Enter the first number:  ";
	cin >> userNum;
	int userNum2;
	cout << "Enter the second number: ";
	cin >> userNum2;

	cout << endl;

	string calculation;
	char userInput;
	cout << "What would you like to do with these numbers?" << endl;
	cout << "Addition       | +" << endl;
	cout << "Subtraction    | -" << endl;
	cout << "Multiplication | *" << endl;
	cout << "Division       | /" << endl;
	cout << "(Enter the operation symbol noted)" << endl;
	cin >> userInput;

	cout << endl;

	if (userInput == '+') {

	}
	else if (userInput == '-') {

	}
	else if (userInput == '*') {

	}
	else if (userInput == '/') {

	}
	else cout << "Invalid Input." << endl;

	return 0;
}
