#include <iostream>
#include "scan.h"
#include "print.h"
using namespace std;
extern int Flag;//�����ⲿ���� 
int main()
{
	Scan in;
	Print out;
	in.StringInput();
	if(Flag)
		out.StringOutput();
	return 0;
}
