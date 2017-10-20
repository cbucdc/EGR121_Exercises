// Exercise Set 18.docx
/*
The Concept
Vectors are an excellent option for storing many instances of related data.  In addition loop statements like for loops are perfect for working with vectors.

The problem
A teacher has a small class of 10 students taking an exam.  The professor would like to enter the scores from the exam and then calculate the maximum score, minimum score and average score and display.

Your job is to write a program that collects the 10 scores using a one for loop.  Then write a second for loop that calculates the min, max and avg of the scores.

Finally display the min, max and average.
*/
#include <iostream>
#include <vector>

using namespace std;
int main() {
	int N = 10;
	vector<double> v;
	double n;

	cout << "Enter the students' 10 scores: ";
	for (int i = 0; i < N; ++i)
	{
		cin >> n;
		v.push_back(n);
	}
	double sum = 0;
	double min = v.at(0);
	double max = v.at(0);
	for (size_t i = 0; i < v.size(); ++i)
	{
		double a = v.at(i);
		sum += a;
		if (a < min) {
			min = a;
		}
		if (a > max) {
			max = a;
		}
	}
	cout << "Min: " << min << endl;
	cout << "Max: " << max << endl;
	cout << "Average: " << sum / v.size() << endl;
	return 0;

}
