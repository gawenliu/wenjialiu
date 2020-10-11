#include<stdio.h>
#include<string.h>
int main()
{
	char x[100];
	int i[100];
	int a=0,b=0,len=0,ji=0,ou=0;
	printf("location=");
	scanf("%s",&x);
	len=strlen(x);
	for(a=0;a<len;a++)
	{
		if(x[a]>='0'&&x[a]<='9')
		{
			while(x[a+1]>='0'&&x[a+1]<='9')
			{
				a++;
			}
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
	}
	if(ou>ji)
	printf("%d",ji);
	else
	printf("%d",ou);
	return 0;
 } 
