#include <stdio.h>
#include <math.h>
void add(int);
int main()
{
	int sum,a,b,i,j,k;
	scanf("%d%d",&a,&b);
	sum=a+b;
	if(sum>-1000&&sum<1000) printf("%d",sum);
	else if(sum>-1000000&&sum<1000000)
	{
		j=sum/1000;
		printf("%d",j);
		i=(int)fabs(sum)%1000;
		add(i); 
	}
	else
	{
		j=sum/1000000;
		printf("%d",j);
		k=(int)fabs(sum)%1000000;
		i=k/1000;
		add(i);
		i=(int)fabs(k)%1000; 
		add(i); 
	}
	return 0;
}
void add(int a)
{
	if(a<10) printf(",00%d",a);
	else if(a<100) printf(",0%d",a);
	else printf(",%d",a);
}

