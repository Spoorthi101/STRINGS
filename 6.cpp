#include<stdio.h>
#include<string.h>
int main ()
{
	int i,L;
	char s[1000];
	gets(s);
	L=strlen(s);
	char ch;
	scanf("%c",&ch);
	int k=0;
	for (i=0;i<L;i++)
	{
		if (s[i]==ch)
		{
			k++;
			break;
		}
	}
	if (k>0)
	{printf("The first occurrence of %c is at %d",ch,i);}
	else
	{printf("%c does not occur in string",ch);}
	return 0;
}
