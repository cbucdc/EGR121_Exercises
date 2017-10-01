

#include <iostream>
#include <string>         // std::string
#include <iomanip>
using namespace std;
int main() {

	// initialize variables
	char gradeLetter;
	cout << fixed << setprecision(1);
	cout << "Enter the letter grade: ";
	cin >> gradeLetter;
	float grade = 0;
	switch (gradeLetter) {
	case 'F':
		grade = 0;
		break;
	case 'D':
		grade = 1;
		break;
	case 'C':
		grade = 2;
		break;
	case 'B':
		grade = 3;
		break;
	case 'A':
		grade = 4;
		break;
	default:
		cout << "Invalid grade" << endl;
		return 0;
	}
	cout << "Grade point per unit: " << grade << endl;
	return 0;
}
