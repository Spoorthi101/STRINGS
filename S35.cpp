#include<stdio.h>
#include<string.h>
int main ()
{
	char s[1000];
	gets(s);
	int L=strlen(s);
	int i,c=0;
	for (i=0;i<L-2;i++)
	{
		if (s[i]!=s[i+2])
		{
			c++;
			printf("NO");
			break;
		}
	}
	if (c==0)
	printf("YES");
	return 0;
}
