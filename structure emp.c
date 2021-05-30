#include<stdio.h>
struct emp
{
	int eno;
	char ename[20];
	float esal;
};
void main()
{
	struct emp e={77,"harika",50000};
	printf("employee details:\n");
	printf("employee number: %d\n",e.eno);
	printf("employee name: %s\n",e.ename);
	printf("employee salary: %0.0f",e.esal);
}








