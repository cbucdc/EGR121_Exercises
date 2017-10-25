// Exercise Set 21(2)(1).docx
/*
Problem Description
Given the mass of an object, we can calculate the energy contained in the object and also the weight of the object.

Given the mass of an object, we can calculated the energy contained in the object as:

E=mc2

Where m is the mass in kilograms, c is the speed of light (3.0 x 10^8 m/s) and E is the energy in Joules.

Given the mass of an object, we can calculated the weight of the object as:

w=mg

Where m is the mass of the unit in kilograms,
g is the gravitational constant for the planet that the object is located on,
and w is the weight in Newtons.

For the gravitational constant, we’ll use Earth’s which is 9.8 m/s/s.

Programming Exercise

Create a program that asks the user for the mass of an object amd prints out the object's energy and weight.

Write a function called calculate that takes three parameters:
the mass as pass by value,
the energy as pass by reference,
and the weight as pass by reference.
Ensure the arguments are in that order.
The function calculates the energy and weight and returns these via the pass by reference parameters.

The main function of the program displays the energy and weight with the correct units.

Example sessions:
```
1
9e+16 Joules 9.8 Newtons 
```

```
10
9e+17 Joules 98 Newtons 
```

```
999
8.991e+19 Joules 9790.2 Newtons 
```

```
42
3.78e+18 Joules 411.6 Newtons 
```

*/
#include <iostream>

using namespace std;

void calculate(double m, double &e, double & w) {
	double g = 9.8;
	double c = 3e8;
	w = m * g;
	e = m * c * c;
}

int main() {
	double m;
	double e, w;
	cin >> m;
	calculate(m, e, w);
	cout << e << " Joules " << w << " Newtons " << endl;
	return 0;

}
