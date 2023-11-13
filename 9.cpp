#include<stdio.h>
#include<string.h>
int main ()
{
	char s[1000];
	printf("enter string:");
	gets(s);
	int i,k=0;
	int L=strlen(s);
	for (i=0;i<L;i++)
	{
		if (s[i]==65||s[i]==69||s[i]==73||s[i]==79||s[i]==85||s[i]==97||s[i]==101||s[i]==105||s[i]==111||s[i]==117)
		{printf("%c ",s[i]);}
	}
	return 0;
}
