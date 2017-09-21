#include <iostream>
#include <string>         // std::string
using namespace std;
int main() {
	// initialize variables
	string name, first, last;
	cout << "Enter name: ";
	getline(cin, name);
	first = name.substr(0, name.find_first_of(" "));
	last = name.substr(name.find_last_of(" ") + 1, name.length() - 1);
	cout << "Number of characters: " << name.length() << endl;
	cout << "First word: " << first << endl;
	cout << "Last word: " << last << endl;
	return 0;

}
