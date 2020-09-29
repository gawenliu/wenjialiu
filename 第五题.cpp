#include<stdio.h>
#include<string.h>
int main()
{
	int num[100];
    char zifu[100];
    int x=0;
    int y=0;
    int time=0;
    int i=-1;
    scanf("%s",&zifu);
    time=strlen(zifu);
    for(y=0;y<time;y++)
    {
    	if(zifu[y]==',')
    	{
    		for(x=y;x<time;x++)
    		{
    			zifu[x]=zifu[x+1];
			}
			time--;
		}
		else if(zifu[y]=='.')
    	{
    		for(x=y;x<time;x++)
    		{
    			zifu[x]=zifu[x+1];
			}
			time--;
		}
		else if(zifu[y]=='\0')
    	{
    		for(x=y;x<time;x++)
    		{
    			zifu[x]=zifu[x+1];
			}
			time--;
		}
	}
	for(y=0;y<time;y++)
	{
		printf("%c\n",zifu[y]);
	}
	return 0;
}
