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
			if (s1[i]=='t'&&s1[i+1]=='h'&&s1[i+2]=='e')
			{
				c++;
			}
		}
	printf("The frequency is %d",c);
	return 0;
}

