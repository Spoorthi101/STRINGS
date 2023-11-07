#include<stdio.h>
int main ()
{
	char s[1000];
	int i=0;
	printf("enter string:");
	scanf("%s",&s);
	while (s[i]!=0)
	{
		i++;
		}	
		printf("length of string is %d",i);
		return 0;
}
