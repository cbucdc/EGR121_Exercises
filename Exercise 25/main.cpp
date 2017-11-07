// Exercise Set 22(1).docx
/*
Exercise:
Create a program that reads a text file and prints out the contents of the file  but will all letters converted to uppercase.

The name of the file to be read by the program should be typed in by the user.

Here are some example session:

Contents of "data.txt":
```
Hello, World!
```
User input:
```
data.txt
```
Program output:
```
HELLO, WORLD!
```





Contents of "data.txt":
```
tHiS FiLe
HaS
mIxEd CaSeS
```
User input:
```
data.txt
```
Program output:
```
THIS FILE
HAS
MIXED CASES
```
*/
// toupper example (C++)
#include <iostream>       // std::cout
#include <string>         // std::string
#include <locale>         // std::locale, std::toupper
#include <fstream>

using namespace std;
std::locale loc;
string strToUpper(string str) {
	string outstr = string(str);
	for (std::string::size_type i = 0; i < str.length(); ++i) {
		outstr[i] = std::toupper(str[i], loc);
	}
	return outstr;
}

int main() {
	ifstream inFile;
	string fname;
	cin >> fname;
	inFile.open(fname);
	if (!inFile.is_open()) {
		cout << "File not found.\n" ;
		return 1;
	}
	string line;
	while (getline(inFile, line)) {
		// strToUpper(line);
		cout << strToUpper(line) << endl;
	}
	return 0;

}
