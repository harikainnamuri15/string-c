#include<stdio.h>
#include<string.h>
int main()
{
	char str1[10]="hello";
	char str2[10];
	strncpy(str2,str1,sizeof(str2));
	str2[sizeof(str2)-1]='\0';
	printf("%s",str2);
	return 0;
}
