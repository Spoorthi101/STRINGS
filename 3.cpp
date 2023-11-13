#include<stdio.h>
#include<string.h>
int main ()
{
	int L1,L2,i;
	char s1[1000],s2[1000];
	scanf("%s%s",&s1,&s2);
	L1=strlen(s1);
	L2=strlen(s2);
	for (i=0;i<=L2;i++)
	{
		s1[i+L1]=s2[i];
	}
	printf("%s",s1);
	return 0;
}
