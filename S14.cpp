#include<stdio.h>
#include<string.h>
int main ()
{
	char s[1000];
	gets(s);
	int L=strlen(s);
	int i;
	int c=0,d=0,e=0,f=0;
	for(i=0;i<L;i++)
	{
		if (s[i]==' ')
		c++;
		else if (s[i]=='0'||s[i]=='1'||s[i]=='2'||s[i]=='3'||s[i]=='4'||s[i]=='5'||s[i]=='6'||s[i]=='7'||s[i]=='8'||s[i]=='9')
		d++;
		else if (s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
		e++;
		else if ((s[i]>'A'&&s[i]<'Z')||(s[i]>'a'&&s[i]<'z'))
		f++;
	}
	printf("The no of white spaces is %d\n",c);
	printf("The no of digits is %d\n",d);
	printf("The no of vowels is %d\n",e);
	printf("The no of consonants is %d\n",f);
	return 0;
}
