#include<stdio.h>
#include<string.h>
int main()
{
	char str1[10]="hello";
	char str2[10];
	printf("%s\n",strcpy(str2,str1));
	printf("%s",str2);
	return 0;
}
