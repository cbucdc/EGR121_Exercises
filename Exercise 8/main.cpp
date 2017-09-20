#include <iostream>

using namespace std;
int main(){
	// initialize variables
	int i;
	char c;

	cout << "Enter a number between 65 and 90: ";
	cin >> i;
	// cast the user-entered int to a char (look up ASCII table)
	c = static_cast<char>(i);
	cout << c << endl;
	// print out a char offset from the user entered char
	cout << static_cast<char>(c+32) << endl;
	return 0;
	
}
