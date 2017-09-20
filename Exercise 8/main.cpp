#include <iostream>

using namespace std;
int main(){
	int i;
	char c;
	cout << "Enter a number between 65 and 90: ";
	cin >> i;
	c = static_cast<char>(i);
	cout << c << endl;
	cout << static_cast<char>(c+32) << endl;
	return 0;
	
}
