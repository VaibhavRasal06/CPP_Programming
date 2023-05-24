#include<iostream>
using namespace std;

int main(){

	int marks;

	cout << "Enter your marks: " << endl;

	cin >> marks;

	if (marks >=90) {
		
		cout << "you get A+ grade" << endl;
	
	} else if (marks >=80) {
	
		cout << "you get A grade" << endl;
		
		
	} else if (marks >=70) {

                cout << "you get B+ grade" << endl;

	} else if (marks >=60) {

                cout << "you get B grade" << endl;	

	} else if (marks >=50) {

                cout << "you get C grade" << endl;

	} else if (marks >=40) {

               	cout << "you get D grade" << endl;

	} else if (marks >=30) {

                cout << "you get F grade" << endl;
	
	}

	return 0;


}
