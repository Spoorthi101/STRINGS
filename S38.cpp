#include<stdio.h>
#include<string.h>
int main ()
{
	char s[1000];
	printf("Enter string:");
	gets(s);
	int L=strlen(s);
	int i,j,k;
	for (i=0;i<L;i++)
	{
		for (j=i+1;j<L;j++)
		{
			if (s[i]==s[j])
			{
				for (k=j;k<L;k++)
				s[k]=s[k+1];
				L--;
				j--;
			}
		}
	}
	printf("%s",s);
	return 0;
}
