#include<iostream>
#include"Circle.h"
using namespace std;
#define pi 3.14
extern double Scircle(double r)
{
	double area;
	area = r*r*pi;
	return area;
}