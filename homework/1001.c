#include <stdio.h>
#include <math.h>
void add(int);
int main()
{
   int sum,a,b,i,j,k;
   scanf("%d%d",&a,&b);
   sum=a+b;
   if(sum>-1000&&sum<1000)printf("%d",sum);
   else if(sum>-1000000&&sum<1000000)
    {
    i=(int)(abs(sum))%1000;
    j=sum/1000;
    printf("%d",j);
    add(i);
    }
    else
    {
        i=(int)abs(sum)%1000000;
        k=(int)abs(i)%1000;
        j=sum/1000000;
        printf("%d",j);
        add(i);
        add(k);
    }
    return 0;
}
void add(int a)
{
    if(a<10)printf(",00%d",a);
    else if(a<100)printf(",0%d",a);
    else printf(",%d",a);
}

