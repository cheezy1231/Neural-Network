#include "pch.h"
#include "vmath.h"
#include "activationFunctions.h"
#include <vector>
#include <iostream>

using namespace std;

int main()
{
	vmath vmath;
	vector<double> v1{ 1.0, 5.0, 3.0, 4.0, 2.0 };
	vector<double> v2{ 4.0, 6.0, 8.0, 1.0, 4.0 };

	double thing = vmath.vdot(v1, v2);

	cout << thing << endl;

	activationFunctions activation;

	cout << activation.softder(5) << endl;

	return 0;
}
