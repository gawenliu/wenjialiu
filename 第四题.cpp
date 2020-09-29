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
    zifu[0]='1';
    scanf("%s",&zifu);
    time=strlen(zifu)-1;
    for(y=0;y<=time;y++)
    {
    	if(zifu[y]==',')
    	{
    		for(x=y;x<time;x++)
    		{
    			zifu[x]=zifu[x+1];
			}
			time--;
		}
		num[y]=zifu[y]-'0';
	}
	for(y=0;y<=time;y++)
	{
		if(y==num[y])
		{
			i=y;
			break;
		}
	}
	printf("%d",i);
	return 0;
}
