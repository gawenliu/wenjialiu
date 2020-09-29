#include<stdio.h>
#include<string.h>
int main()
{
	int num[100];
    char zifu[100];
    int x=0;
    int y=0;
    int time=0;
    int i=0;
    scanf("%[^\n]",&zifu);
    time=strlen(zifu);
    for(y=0;y<time;y++)
    {
    	i=zifu[y];
    	if(zifu[y]==',')
    	{
    		for(x=y;x<time;x++)
    		{
    			zifu[x]=zifu[x+1];
			}
			time--;
			y--;
		}
		else if(zifu[y]=='.')
    	{
    		for(x=y;x<time;x++)
    		{
    			zifu[x]=zifu[x+1];
			}
			time--;
			y--;
		}
		else if(zifu[y]=='£¬')
    	{
    		for(x=y;x<time;x++)
    		{
    			zifu[x]=zifu[x+1];
			}
			time--;
			y--; 
		}
		else if(zifu[y]==':')
    	{
    		for(x=y;x<time;x++)
    		{
    			zifu[x]=zifu[x+1];
			}
			time--;
			y--;
		}
		else if(i==32)
    	{
    		for(x=y;x<time;x++)
    		{
    			zifu[x]=zifu[x+1];
			}
			time--;
			y--;
		}
		else if(i>64&&i<91)
    	{
    		zifu[y]=zifu[y]+32; 
		}
	}
	time=strlen(zifu);
	i=1;
	x=time/2;
	for(y=0;y<=x;y++)
	{
		if(zifu[y]!=zifu[time-y-1])
		{
			i=0;
		}
	}
	if(i==1)
	{
		printf("ture");
	}
	else
	{
		printf("false");
	}
	return 0;
}
