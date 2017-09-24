

#include <iostream>
#include <string>         // std::string
using namespace std;
int main() {

	// initialize variables
	int a;
	int b;
	cout << "Enter 2 integers separated by a space: ";
	cin >> a >> b;
	int p  = a * b;
	cout << "The product of " << a << " and " << b << " is " << p ;
	cout << " which is an ";
	if (p % 2 == 0) {
		cout << "even";
	}
	else {
		cout << "odd";

	}
	cout << " number" << endl;
	return 0;
}
