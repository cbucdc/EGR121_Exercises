

#include <iostream>
#include <string>         // std::string
using namespace std;
int main() {

	// initialize variables
	string s = "I am the way, and the truth, and the life. If you had known me, you would have known my Father also.";
	string middle = "No one comes to the Father except through me.";
	int index =  s.find(".") + 1;
	string inserted = s.substr(0, index) + " " + middle + s.substr(index, s.size()) + "\n";
	inserted = inserted.replace(inserted.find_first_of("I"), 1, "Jesus");
	inserted = inserted.replace(inserted.find_first_of(" am"), 3, " is");
	inserted = inserted.replace(inserted.find(" my"), 3, " the");
	inserted = inserted.replace(inserted.find(" me"), 3, " him");
	inserted = inserted.replace(inserted.find(" me"), 3, " him");
	cout << inserted << endl;
	return 0;
}
