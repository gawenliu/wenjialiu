#include<stdio.h>
#include<string.h>
int main() 
{
    int score[100];
    char zifu[100];
    int x=0;
    int y=0;
    int time=0;
    int sum=0;
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
	}
    for(x=0;x<=time;x++)
    {
        if(zifu[x]=='+')
        {
            score[x]=score[x-1]+score[x-2];
            sum=sum+score[x];
        }
        else if(zifu[x]=='D')
        {
        score[x]=score[x-1]+score[x-1];
            sum=sum+score[x];
        }
        else if(zifu[x]=='C')
        {
            sum=sum-score[x-1];
            y=x-1;
            for(x=y;x<=time-1;x++)
            {
            	zifu[x]=zifu[x+2];
			}
			time=time-2;
			x=y-1;
        }
        else
        {
            score[x]=zifu[x]-'0';
            sum=sum+score[x];
        }
    }
    printf("%d",sum);
    return 0;
}
