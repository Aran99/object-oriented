#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <queue>
#include "scan.h"
using namespace std;
queue<string>q;//定义全局队列 q 
int Flag=1;//定义全局变量 并且初始化为 1 
void Scan::StringInput()
{
	int i,j,k,flag;//k是用了判断连续数字的个数 
	gets(str1);//输入字符串 str1 
	memset(str2,0,sizeof(str2));//将字符数组str2置空 
	for(i=j=k=flag=0;str1[i]!='\0';++i,flag=1)//当 str1[i]=='\0'时停止循环 
	{
		if(str1[i]>='0'&&str1[i]<='9') 
		{	
			str2[j++]=str1[i];//将str1第i位赋给str2的第j位  之后j=j+1 
			if(k>10)
			{
				cout<<"error!"<<endl;
				Flag=0;
				break;//如果k>10  就报错 并且停止循环
			}
			k++;
		}
		else if(str1[i]=='.')
		{
			q.push(str2);//将str2放入队尾 
			memset(str2,0,sizeof(str2)); 
			q.push(".");
			j=flag=0;
		}
		else
		{
			if(k)
			{
				q.push(str2);
				memset(str2,0,sizeof(str2));
				str2[0]=str1[i];
				q.push(str2);
				j=k=flag=0;
			}
		 	else
			{
				memset(str2,0,sizeof(str2)); 
				str2[0]=str1[i];
				q.push(str2);
				flag=0;
			}
		}
		if(str1[i+1]=='\0'&&flag)
			q.push(str2);
	}
}
