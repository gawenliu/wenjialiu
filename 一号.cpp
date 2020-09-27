#include<stdio.h>
#include<string.h>
#include<string>
int main()
{
    char a[100];
    int num[100];
    int len;
    int b=0;
    int c=0;
    scanf("%s",&a);
    len=strlen(a);
    for(b=0;b<len;b++)
    {
    	scanf("%d£¬",&num[b]);
	}
	for(b=0;b<len;b++)
	{
		while(num[c]!=b)
		{
		   c++;
	    }
				printf("%c",a[c]);
		c=0; 
	}
    return 0;
}
