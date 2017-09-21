#include <iostream>

using namespace std;
int main() {
	int n = 1;
	while (n > 0) {

		cout << "Enter a positive integer or zero to stop: ";
		cin >> n;
		// loop over height of figure
		int i = n;
		while ( i >= 1)
		{
			// print out the whitespace on the left of each line
			int j = 0;
			while ( j < n - i)
			{
				cout << "  ";
				j++;
			}
			// print out the asterisks on the right
			j = 0;
			while ( j < i)
			{
				cout << "* ";
				j++;
			}
			cout << endl;
			i--;
		}
	}
	return 0;

}
