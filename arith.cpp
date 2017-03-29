#include "stdafx.h"
// arith.cpp -- some C++ arithmetic
#include <iostream>
int main()
{
	using namespace std;

	double hats, heads;

	cout.setf(ios_base::fixed, ios_base::floatfield);		//fixed-point
	cout << "Enter n number : ";
	cin >> hats;
	cout << "Enter another number: ";
	cin >> heads;

	cout << "hats = " << hats << ": heads = " << heads << endl;
	cout << "hats + heads = " << heads + hats << endl;
	cout << "hats - heads = " << hats - heads << endl;
	cout << "hats * heads = " << hats * heads << endl;
	cout << "hats / heads = " << hats / heads << endl;
	return 0;
}