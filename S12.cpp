#include<stdio.h>
#include<string.h>
int main ()
{
	char s[1000];
	gets(s);
	int L=strlen(s);
	int i,j;
	int max=0,min=L,maxi,mini,c;
	for (i=0;i<L;i++)
	{
		c=0;
		for (j=0;j<L;j++)
		{
			if (s[i]==s[j])
				c++;
		}
		if (c>max)
	{
		max=c;
		maxi=i;
	}
	if (c<min)
	{
		min=c;
		mini=i;
	}
	}
	printf("The max repeated element is %c\n",s[maxi]);
	printf("The min repeated element is %c\n",s[mini]);
	return 0;
}
