#include<stdio.h>
struct student
{
	int sno;
	char sname[20];
};
void main()
{
	struct student s[3];
	int i;
	for(i=0;i<3;i++)
	{
		printf("enter name: ");
		scanf("%s",&s[i].sname);
		printf("enter roll no: ");
		scanf("%d",&s[i].sno);
	}
	for(i=0;i<3;i++)
	{
		printf("\nstudent name : %s",s[i].sname);
		printf("\nstudent roll no : %d",s[i].sno);
	}
}







