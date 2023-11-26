#include<stdio.h>
#include<string.h>
int main ()
{
	char s[1000];
	gets(s);
	int L=strlen(s);
	int i,j,c;
	for (i=0;i<L;i++)
	{
		int c=0;
		for (j=0;j<L;j++)
		{
			if (s[i]==s[j])
			{
				c++;
			}
		}
		if (c==1)
		{printf("First non repeating element is %c",s[i]);
		break;}
	}
	return 0;
}
