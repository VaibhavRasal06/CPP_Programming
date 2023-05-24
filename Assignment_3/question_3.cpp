#include <iostream>
using namespace std;

int main(){

	int cost_price, selling_price, profit, loss;

	cout << "Enter the cost price: " << endl;

	cin >> cost_price;

	cout << "Enter the selling price: " << endl;

	cin >> selling_price;
	
	profit = selling_price - cost_price;

	loss = cost_price - selling_price;

	if (selling_price > cost_price) {
		
		cout << "you making profit: " << profit << endl;
	
	} else {
	
		cout << "you making loss: " << loss << endl;
       
	} 

	return 0;


}
