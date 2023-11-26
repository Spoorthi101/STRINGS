#include<stdio.h>
#include<string.h>
int main ()
{
	char s[1000];
	gets(s);
	int L=strlen(s);
	int i;
	for (i=0;i<L;i++)
	{
		if (s[i]>='A'&&s[i]<='Z')
		{
			printf("%c",s[i]);
			break;
		}
	}
	return 0;
}
