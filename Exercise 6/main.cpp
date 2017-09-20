#include <iostream>

using namespace std;
int main(){
	// initialize variables
	double pi = 3.14;
	double r;
	double h;
	cout << "Enter the radius: ";
	cin >> r;
	cout << "Enter the height: ";
	cin >> h;
	cout << "The volume of a cone with a radius of " << r << " and a height of " << h << " is " << pi*r*r*h/3 << endl;
	

	return 0;
	
}
