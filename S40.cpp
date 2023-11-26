#include<stdio.h>
#include<string.h>
int main ()
{
	char s1[1000],s2[1000];
	printf("Enter s1:");
	gets(s1);
	printf("Enter s2:");
	gets(s2);
	int L1=strlen(s1);
	int L2=strlen(s2);
	int i,j,k;
	for (i=0;i<L1;i++)
	{
		for (j=0;j<L2;j++)
		{
			if (s1[i]==s2[j])
			{
				for (k=i;k<L1;k++)
				
					s1[k]=s1[k+1];
					L1--;
					i--;
				
			}
		}
	}
	printf("%s",s1);
	return 0;
}
