#include <iostream>
// Exercise Set 15Kolta.docx
using namespace std;
int main() {
	int n;
	int s = 1;
	cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		s *= i;
	}
	cout << s << endl;
}
