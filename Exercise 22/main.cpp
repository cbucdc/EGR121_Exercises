/*
Exercise Set 20(1).docx
Create a program that includes a function called reverse that takes a string and returns a string in the reverse order. For example, given “hello” as the input, the function should return “olleh”, which is the reversed string of “hello”.

The main function should keep prompt the user to input a string until the user types “Q” For each string input call the function with the string and display the result. Note that the user input string may contain white spaces.

Test your program with the following input.

a) “Hello” (your program should display “olleH”)
b) “CBU” (your program should display “UBC”)
c) “C++ is fun!” (your program should display “!nuf si ++C”)
d) “Q” (should exit the program)
*/
#include <iostream>
#include <vector>
#include <iomanip>
#include <string>

using namespace std;

string reversed(string s) {
	string out = string(s);
	for (size_t i = 0 ; i < s.length(); i++) {
		out[i] = s[s.length() - i - 1];
	}
	return out;
}
int main() {
	string userInput;
	while (true) {
		getline(cin, userInput);
		if (userInput == "Q") {
			break;
		}
		cout << reversed(userInput) << endl;
	}

	return 0;

}
