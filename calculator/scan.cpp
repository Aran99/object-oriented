#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <queue>
#include "scan.h"
using namespace std;
queue<string>q;//����ȫ�ֶ��� q 
int Flag=1;//����ȫ�ֱ��� ���ҳ�ʼ��Ϊ 1 
void Scan::StringInput()
{
	int i,j,k,flag;//k�������ж��������ֵĸ��� 
	gets(str1);//�����ַ��� str1 
	memset(str2,0,sizeof(str2));//���ַ�����str2�ÿ� 
	for(i=j=k=flag=0;str1[i]!='\0';++i,flag=1)//�� str1[i]=='\0'ʱֹͣѭ�� 
	{
		if(str1[i]>='0'&&str1[i]<='9') 
		{	
			str2[j++]=str1[i];//��str1��iλ����str2�ĵ�jλ  ֮��j=j+1 
			if(k>10)
			{
				cout<<"error!"<<endl;
				Flag=0;
				break;//���k>10  �ͱ��� ����ֹͣѭ��
			}
			k++;
		}
		else if(str1[i]=='.')
		{
			q.push(str2);//��str2�����β 
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
