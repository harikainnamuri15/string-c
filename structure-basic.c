#include<stdio.h>
struct emp
{
	int eno;
	char ename[20];
	float esal;
};
main()
{
	struct emp e;
	printf("enter size of emp:%d\n",sizeof(e));
	printf("enter size of emp:%d",sizeof(struct emp));
}









