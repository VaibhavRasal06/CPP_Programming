#include <iostream>
using namespace std;

int main(){

	char op;

	float a, b;

	cout << "Enter the operator ( + , - , * , / ): " << endl;
	
	cin >> op;

	cout << "Enter the two numbers: " << endl;

	cin >> a >> b;

	switch (op) {

		case '+':
	
		cout << "addition of a and b is: " << (a + b) << endl;

		break;


		case '-':

		cout << "substraction of a and b is: " << (a -b)  << endl;

		break;


		case '*':
		
		cout << "multiplication of a and b is: " << (a * b)  << endl;
	
		break;

		
		case '/':

       		 cout << "division of a and b is: " << (a / b)  << endl;


	}

	return 0;




}
