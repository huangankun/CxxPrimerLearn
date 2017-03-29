#include "stdafx.h"

//hexoct2.cpp -- display values in hex and octal

#include <iostream>
int main()
{
	using namespace std;

	int chest = 42;	//decimal integer literal

	int waist = 42;	//hexadecimal integer literal
	int inseam=42;		//octal integer literal

	cout<<"Monsieur cuts a striking figure \n";
	cout<<"chest = "<<chest << "{42 in decimal}\n";
	cout<<hex;	//manipulator for changing number base
	cout<<"waist = "<<waist<<"{hexadecimal for 42} \n";
	cout<<oct;//manipulator for changing number base
	cout<<"inseam = "<<inseam<<"{octal for 42}\n";
	return 0;
}
