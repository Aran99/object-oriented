#include <iostream>
#include <queue>
#include "scan.h"
#include "print.h"
using namespace std;
extern queue<string>q;
void Print::StringOutput()
{
	int i,n;
	n=q.size();
	for(i=0;i<n;++i)
	{
		cout<<q.front()<<endl;//������׵�ֵ 
		q.pop();//�����׵��� 
	}	
}
