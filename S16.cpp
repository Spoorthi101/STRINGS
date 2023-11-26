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
		if (s[i]==65||s[i]==69||s[i]==73||s[i]==79||s[i]==85||s[i]==97||s[i]==101||s[i]==105||s[i]==111||s[i]==117)
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
