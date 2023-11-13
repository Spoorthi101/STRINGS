#include<stdio.h>
#include<string.h>
int main ()
{ 
	char s1[1000],s2[1000];
	printf("enter string 1:");
	gets(s1);
	printf("enter string 2:");
	gets(s2);
	int L1=strlen(s1);
	int L2=strlen(s2);
	int k=0,i;
	for (i=0;i<L1;i++)
	{
		if (s1[i]!=s2[i])
		{
			k++;
			break;
		}
	}
	if (k==0)
	printf("The strings s1 and s2 are equal");
	else
	printf("The strings s1 and s2 are not equal");
	return 0;
}
