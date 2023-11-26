#include<stdio.h>
#include<string.h>
int main ()
{
	char s[1000];
	printf("Enter string:");
	gets(s);
	int L=strlen(s);
	int i,k;
	for (i=0;i<L;i++)
	{
		if (s[i]=='('||s[i]==')')
		{
			for (k=i;k<L;k++)
			s[k]=s[k+1];
			L--;
			i--;
		}
	}
	printf("%s",s);
	return 0;
}
