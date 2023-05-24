#include <iostream>
using namespace std;

int main(){

	int a;

	cout << "Enter the number: " << endl;

	cin >> a;

	if (a < 0) {
	
		cout << "The number is negative and skipped" << endl;
	
	} else {
		
		cout << "The number is positive" << endl;
	}

	return 0;

}
