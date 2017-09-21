#include <iostream>

using namespace std;
int main() {
	int n;
	int i = -20;
	int sum = 0;
	cin >> n;
	cout << "Here are the numbers evenly divisible by " << n << ": ";
	while (i <= 40) {
		if (i % n == 0) {
			sum += i;
			cout << i << " ";
		}
		i++;
	}
	cout << endl << "Their sum is: " << sum << endl;
	return 0;

}
