#include<stdio.h>
int main()
{
	int a,b,sum=0;
	int *p1,*p2;
	p1=&a;
	p2=&b;
	sum=*p1+*p2;
	printf("%d",sum);
	return 0;
}



