#include<stdio.h>
#include<string.h>
int main()
{
	char x[100];
	int i[100];
	int a=0;
	int b=0;
	int len=0;
	int ji=0;
	int ou=0;
	printf("location=");
	scanf("%s",&x);
	len=strlen(x);
	for(a=0;a<len;a++)
    {
    	if(x[a]==',')
    	{
    		b=a;
    		for(a=a;a<len;a++)
    		{
    			x[a]=x[a+1];
			}
			a=b;
			len--;
		}
	}
	len=strlen(x);
	for(a=0;a<len;a++)
	{
		i[a]=x[a]-'0';
		if(i[a]%2==0)
		{
			ou++;
		}
		else
		{
			ji++;
		}
	}
	if(ou>ji)
	printf("%d",ji);
	else
	printf("%d",ou);
	return 0;
 } 
