// Original exercise by Christopher Chen
// Originally would have used Exercise Set 17.docx
#include <iostream>
#include <vector>

using namespace std;
int main() {
	// ask the user for 10 integers and print them out in reverse order
	cout << "Enter 10 integers: ";
	const int N = 10;
	vector<int> nums(N);
	for (int i = 0; i < N; ++i)
	{
		cin >> nums.at(i);
	}
	for (int i = N-1; i >= 0; i--)
	{
		cout << nums.at(i) << endl;
	}
	return 0;

}
