#include<stdio.h>
#include<string.h>
int main ()
{
	char s1[1000]; 
	gets(s1);
	int L1=strlen(s1);
	int i,j,c=0;
	for (i=0;i<L1;i++)
	{
		for (j=i+1;j<L1;j++)
		{
			if (s1[i]==s1[j])
			{
				c++;
			}
	 }
	}
	int max=0;
	for (i=0;i<L1;i++)
	{	
		if (c>max)
		max=c;
	}
	printf("The most repeated character is %s\n",s1[0]);
	int min=L1;
	for (i=0;i<L1;i++)
	{
		if (c<min)
		min=c;
	}
	printf("The least repeated character is %s",s1[i]);
	return 0;
}
