#include <stdio.h>
#include<string.h>
void main()
{
	char s[50];
	int i,count=1;
	gets(s);
 
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i] == '.')
		count++;
 
 
	}
	printf("%d",count);
	getch();
}
