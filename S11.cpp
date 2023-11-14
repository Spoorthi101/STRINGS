#include<stdio.h>
#include<string.h>
int main ()
{
	char s1[1000];
	gets(s1);
	int L1=strlen(s1);
	int i;
	s1[0]=s1[0]-32;
	for (i=0;i<L1;i++)
	{
		if (s1[i]==32)
		{
			if (s1[i+1]>=97&&s1[i+1]<=122)
			{
				s1[i+1]=s1[i+1]-32;
			}
		}
	}
	printf("%s",s1);
	return 0;
}
