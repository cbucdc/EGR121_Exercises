#include <iostream>
using namespace std;

int randFunc (int lower, int upper) {
	srand(time(0));
	int randNum = rand() % upper + lower;

	return randNum;
}

int main() {

	int num;

	num = randFunc(1, 10);
	cout << num << endl;
	return 0;
}