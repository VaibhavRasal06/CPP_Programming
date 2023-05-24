#include<iostream>
using namespace std;

int main(){

	int a;

	cout << "Enter the nuber" << endl;

	cin >> a;
	
	if (a < 0) {


		a = -(a);
		
	}

	cout << "absolute value is: " << a << endl;

	return 0;

}
