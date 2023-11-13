#include<stdio.h>
#include<string.h>
int main ()
{
	int L,i;
	char s[1000];
	gets(s);
	L=strlen(s);
	for (i=0;i<L/2;i++)
	{
		s[i]=s[i]+s[L-i-1];
		s[L-i-1]=s[i]-s[L-i-1];
		s[i]=s[i]-s[L-i-1];
	}
	printf("%s",s);
	return 0;
}
