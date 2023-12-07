#include <iostream>
using namespace std;

void userCalculationAddition(double userNum, double userNum2){
	double total = userNum + userNum2;
	cout << total << endl;
}
// Stores the code which calculates the addition of two numbers
// Will output 'total' to screen when called by Main

void userCalculationSubtraction(double userNum, double userNum2) {
	double total = userNum - userNum2;
	cout << total << endl;
}
// Stores the code which calculates the subtraction of two numbers
// Will output 'total' to screen when called by Main

void userCalculationMultiplication(double userNum, double userNum2) {
	double total = userNum * userNum2;
	cout << total << endl;
}
// Stores the code which calculates the Multiplication of two numbers
// Will output 'total' to screen when called by Main

void userCalculationDivision(double userNum, double userNum2) {
	double total = userNum / userNum2;
	cout << total << endl;
}
// Stores the code which calculates the Division of two numbers
// Will output 'total' to screen when called by Main

int main() // Starts Main (function)
{
	while (true) { // Loops the program so you do not have
		       // to restart to do every calculation

		double userNum;
		cout << "Enter the first number:  ";
		cin >> userNum;
		// Creates the variable 'userNum' to store a number with a floating point
		// Program asks user for an input and then waits for one
		double userNum2;
		cout << "Enter the second number: ";
		cin >> userNum2;
		// Creates the variable 'userNum2' to store a number with a floating point
                // Program asks user for an input and then waits for one

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
		// Creates a character imput and waits for one.
		// Gives the user 4 options as to what the program does

		cout << endl;

		if (userInput == '+') {
			userCalculationAddition(userNum, userNum2);
		}
		// Calls the void for addition

		else if (userInput == '-') {
			userCalculationSubtraction(userNum, userNum2);
		}
		// Calls the void for subtraction

		else if (userInput == '*') {
			userCalculationMultiplication(userNum, userNum2);
		}
		// Calls the void for multiplication

		else if (userInput == '/') {
			userCalculationDivision(userNum, userNum2);
		}
		// Calls the void for division

		else cout << "Invalid Input." << endl;
		// Ignores any other input and continues the program

		char answer;
		cout << "Enter another calculation?" << endl;
		cout << "('n' or 'N' exits program)" << endl;
		// Asks user if they want to use the program again
		cin >> answer;
		if (answer == 'n' || answer == 'N') {
			break;
		}
		// If the user answers 'n' or 'N', the program ends.
		// Any other input will run the program from the beginning
	}
	return 0;
} // Ends Main (function)
