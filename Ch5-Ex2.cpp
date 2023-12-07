#include <iostream>
using namespace std;

void userCalculationAddition(double userNum, double userNum2){
	double total = userNum + userNum2;
	cout << total << endl;
}
void userCalculationSubtraction(double userNum, double userNum2) {
	double total = userNum - userNum2;
	cout << total << endl;
}
void userCalculationMultiplication(double userNum, double userNum2) {
	double total = userNum * userNum2;
	cout << total << endl;
}
void userCalculationDivision(double userNum, double userNum2) {
	double total = userNum / userNum2;
	cout << total << endl;
}

int main()
{
	double userNum;
	cout << "Enter the first number:  ";
	cin >> userNum;
	double userNum2;
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
		userCalculationAddition(userNum, userNum2);
		return 0;
	}
	else if (userInput == '-') {
		userCalculationSubtraction(userNum, userNum2);
		return 0;
	}
	else if (userInput == '*') {
		userCalculationMultiplication(userNum, userNum2);
		return 0;
	}
	else if (userInput == '/') {
		userCalculationDivision(userNum, userNum2);
		return 0;
	}
	else cout << "Invalid Input." << endl;

	return 0;
}
