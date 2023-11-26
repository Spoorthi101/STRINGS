#include<stdio.h>
#include<string.h>
int main ()
{
	char s[1000];
	gets(s);
	int L=strlen(s);
	int i,j;
	for (i=0;i<L;i++)
	{
		if (s[i]==' ')
		{
			for (j=i;j<L;j++)
			{
				s[j]=s[j+1];
			}
			L--;
			i--;
		}
	}
	printf("%s",s);
	return 0;
}
