#include <iostream>
#include <cmath> //including cmath command to access other C++ math operations
#include <windows.h> 

using namespace std;

int main()
{
	double num1; //double data type for the input number
	double num2; //double data type for the second input number
	string op; //string data type for the operation

	cout << "Welcome to the C++ ULTRA SUPER CALCULATOR!!! \n"
		"By RedocTechno..." << endl;
	Sleep(500); //time delay

	cout << "Enter first number: ";
	cin >> num1; //character input for the data type num2
	Sleep(500); //time delay


	cout << "Enter another number: ";
	cin >> num2; //character input for the data type num1
	Sleep(500); //time delay

	cout << "Choose an operation (+) (-) (*) (/) (roundoff) (sqrt) (abs): ";
	cin >> op;
	Sleep(500); //time delay


	if (op._Equal("+")) //if statement for executing the adding operation
	{
		cout << "Result --> " << num1 + num2;
	}

	if (op._Equal("-")) //if statement for executing the subtraction operation
	{
		cout << "Result --> " << num1 - num2;
	}

	if (op._Equal("*")) //if statement for executing the multiplication operation
	{
		cout << "Result --> " << num1 * num2;
	}

	if (op._Equal("/")) //if statement for executing the division operation
	{
		cout << "Result --> " << num1 / num2;
	}

	if (op._Equal("roundoff")) //if statement for executing the roundoff operation
	{
		cout << "Round of the first number result --> " << round(num1);
	}

	if (op._Equal("sqrt")) //if statement for executing the square root operation
	{
		cout << "Square root of the first number result --> " << sqrt(num2);
	}

	if (op._Equal("abs")) 
	{
		cout << "Absolute value of the first number --> " << abs(num1); //if statement for executing Absolute value for the first number
	}
}
