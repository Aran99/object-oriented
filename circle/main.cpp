#include<iostream>
#include"Circle.h"
using namespace std;

int main()
{
	extern double Scircle(double r);
	double radius;
	cin >> radius;
	cout <<Scircle(radius)<< endl;
	return 0;
}