#include<stdio.h>
#include<string.h>
int main ()
{
	char s1[1000];
	gets(s1);
	int L1=strlen(s1);
	int i;
	for (i=0;i<L1;i++)
	{
		if (s1[i]>=65&&s1[i]<=90)
		{
			s1[i]=s1[i]+32;
		}
	}
	printf("%s",s1);
	return 0;
}
