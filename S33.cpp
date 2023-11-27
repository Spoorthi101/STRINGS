#include<stdio.h>
#include<string.h>
int main ()
{
	char s1[1000],s2[1000];
	gets(s1);
	gets(s2);
	int L1=strlen(s1);
	int L2=strlen(s2);
	int i,j,c=0;
	if (L1>=L2)
	{
	for (i=0;i<L1;i++)
	{
		for (j=0;j<L2;j++)
		{
			if (s2[j]==s1[i])
			{
				c++;
			}
		}
	}
	}
	printf("c=%d\n",c);
	if (c>=L2)
	printf("YES");
	else
	printf("NO");
	return 0;
}
