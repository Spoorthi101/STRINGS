#include<stdio.h>
#include<string.h>
int main ()
{
	char s[1000];
	gets(s);
	int L=strlen(s);
	int i,c=1;
	for (i=0;i<L;i++)
	{
		if (s[i]==32)
		{
			c++;
		}
	}
	printf("The number of words in string are %d",c);
	return 0;
}
