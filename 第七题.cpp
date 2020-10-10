#include<stdio.h>
#include<string.h>
int main() 
{
	int len=0,x=0,y=0,zhenjia=0,z1=0,z2=0;
	int c1,c2;
    char a[100];
    char b[100];
    int zimu[100];
    int zimu1[100];
    scanf("%s",a);
    scanf("%s",b);
    x=strlen(a);y=strlen(b);
    if(x!=y)
    {
    	zhenjia=0;
	}
	else
	{
		for(x=0;x<y-1;x++)
		{
			z1=0;
			z2=0;
	        for(int h=0;h<27;h++)
	        {
		        zimu[h]=0;
		        zimu1[h]=0;
		        for(int i=0;i<=x;i++)
		        {
			        if(a[i]=='a'+h)
			        zimu[h]++;
			        if(b[i]=='a'+h)
			        zimu1[h]++;
		        }
		        if(zimu[h]!=zimu1[h])
		        z1++;
		    }
		    for(int h=0;h<27;h++)
	        {
		        zimu[h]=0;
		        zimu1[h]=0;
		        for(int i=x+1;i<y;i++)
		        {
			        if(a[i]=='a'+h)
			        zimu[h]++;
			        if(b[i]=='a'+h)
			        zimu1[h]++;
		        }
		        if(zimu[h]!=zimu1[h])
		        z2++;
		    }
		    if(z1==0&&z2==0)
		    {
		    	zhenjia++;
			}
	    }
    }
    if(zhenjia==0)
    {
    	printf("false");
	}
	else
	{
		printf("true");
	}
    return 0;
}
