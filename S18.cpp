#include<stdio.h>
#include<string.h>
int main ()
{
	char s[1000];
	gets(s);
	int L=strlen(s);
	int i,j,t;
	for (i=0;i<L;i++)
	{
		for (j=0;j<L;j++)
		{
			if (s[i]<s[j])
			{
				t=s[i];
				s[i]=s[j];
				s[j]=t;
			}
		}
	}
	for (i=0;i<L;i++)
	printf("%c",s[i]);
	return 0;
}
