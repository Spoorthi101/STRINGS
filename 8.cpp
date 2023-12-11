#include<stdio.h>
#include<string.h>
int main ()
{
	char s[1000];
	printf("Enter string:");
	gets(s);
	int L=strlen(s);
	int i,c=0;
	for (i=0;i<L/2;i++)
	{
		if (s[i]!=s[L-i-1])
		{
			c++;
			break;
		}
	}
	if (c>0)
	printf("It is not a palindrome");
	else if (c==0)
	printf("It is a palindrome");
	return 0;
}
