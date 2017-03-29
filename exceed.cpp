//limits.cpp -- some integer limits
#include "stdafx.h"
#include <iostream>
#define ZERO 0
#include <climits> //define INT_MAX as largest int value
int main()
{
	using namespace std;

	short sam = SHRT_MAX;		//initialize a variable to max value
	unsigned short sue = sam;		//okay if variable sam already defined

	cout<<"Sam has "<<sam<<" dollars and sue has "<<sue;
	cout<<" dollars deposited."<<endl
		<<"Add $1 to each account."<<endl<<"Now ";

	sam++;
	sue++;

	cout<<"Sam has "<<sam<<" dollars and Sue has "<<sue<<" dollars deposited.\nPoor Sam"<<endl;

	sam = ZERO;
	sue=ZERO;

	cout<<"Sam has" <<sam<<" dollars and sue has "<<sue;
	cout<<" dollars deposited."<<endl;
	cout<<"Take $1 from each account."<<endl<<" Now";

	sam--;
	sue--;

	cout<<"Sam has "<<sam<<" dollars and Sue has "<<sue<<" dollars deposited."
		<<endl<<" Lucky Sue!"<<endl;
	return 0;
}
