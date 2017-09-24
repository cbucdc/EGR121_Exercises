

#include <iostream>
#include <string>         // std::string
#include <iomanip>
using namespace std;
int main() {

	// initialize variables
	int numItems;
	float purchasePrice;
	float salesTax;
	float shipCost;
	cout << fixed << setprecision(2);
	cout << "Enter the number of items: ";
	cin >> numItems;
	cout << endl << "Enter the purchase price: $";
	cin >> purchasePrice ;
	salesTax = purchasePrice * 0.08;
	if (numItems < 6) {
		shipCost = purchasePrice * 0.05;
	}
	else if ( numItems < 11) {
		shipCost = purchasePrice * 0.025;
	}
	else {
		shipCost = 0;
	}
	cout << endl <<"Sales tax: $" << salesTax << endl;
	cout << "Shipping cost: $" << shipCost << endl;
	cout << "Total cost: $" << purchasePrice + shipCost + salesTax << endl;

	return 0;
}
