#include<stdio.h>
int main ()
{
	char s1[1000],s2[1000],i;
	printf("enter string:");
	scanf("%s",&s1);
	for (i=0;s1[i]!=0;i++)
	{
		s2[i]=s1[i];
	}
	printf("the string s2 is %s",s2);
	return 0;
}
