#include<stdio.h>
#include<string.h>
int main ()
{
	char ch;
	scanf("%c",&ch);
	int p;
	scanf("%d",&p);
	char s1[1000];
	printf("enter string:");
	scanf("%s",&s1);
	int L=strlen(s1);
	int i;
	if (p>=0&&p<=L)
	{
	for (i=L;i>p;i--)
	{
		s1[p]=ch;
		s1[i+1]=s1[i];	
	}}
	printf("%s",s1);
	return 0;
}
