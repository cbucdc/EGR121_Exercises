// Exercise Set 16(1).docx
#include <iostream>

using namespace std;
int main() {
	int n = 1;

	cin >> n;
	// loop over height of figure
	for (int i = n; i >= 1; i--)
	{
		// print out the whitespace on the left of each line
		for (int j = 0; j < n - i; j ++)
		{
			cout << "  ";
		}
		// print out the asterisks on the right
		for (int j = 0; j < i; j ++)
		{
			cout << "* ";
		}
		cout << endl;
	}
	return 0;

}
