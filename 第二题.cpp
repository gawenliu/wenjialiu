#include<stdio.h>
#include<string.h>
int main() 
{
    int score[100];
    char zifu[100];
    int a,b,x,y,z,time,sum=0;
    zifu[0]='1';
    scanf("%s",&zifu);
    time=strlen(zifu)-1; 
    for(y=0;y<=time;y++)
    {
    	if(zifu[y]=='"')
    	{
    		for(x=y;x<time;x++)
    		{
    			zifu[x]=zifu[x+1];
			}
			time--;
		}
	}
	y=0;
    for(x=0;x<=time;x++)
    {
    	score[y]=0;
    	if(zifu[x]=='-')
    	{
    		z=x+1;
    		while(zifu[z]>='0'&&zifu[z]<='9')
    		{
    			z++;
			} 
			for(a=x+1;a<z;a++)
			{
				b=zifu[a]-'0';
				score[y]=score[y]*10+b;
			}
			x=z;
			score[y]=0-score[y];
		}
        else if(zifu[x]=='+')
        {
            score[y]=score[y-1]+score[y-2];
        }
        else if(zifu[x]=='D')
        {
            score[y]=score[y-1]+score[y-1];
        }
        else if(zifu[x]=='C')
        {
        	y--;
        	score[y]=0;
        	y--;
        }
        else if(zifu[x]>='0'&&zifu[x]<='9')
        {
        	z=x;
    		while(zifu[z]>='0'&&zifu[z]<='9')
    		{
    			z++;
			}
			for(a=x;a<z;a++)
			{
				b=zifu[a]-'0';
				score[y]=score[y]*10+b;
			}
			x=z;
		}
		else if(zifu[x]==','||zifu[x]=='，'||zifu[x]=='[')
		{
			y--;
		 }  
        y++;
    }
    for(a=0;a<y;a++)
    {
    	sum+=score[a]; 
	}
    printf("%d",sum);
    return 0;
}
