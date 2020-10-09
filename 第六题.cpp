#include<stdio.h>
#include<string.h> 
int main()
{
	char laji[100];
	int num=0;
	int x=0;
	int y=0;
	int sum[2];
	sum[0]=0;
	sum[1]=0;
	sum[2]=0;
	scanf("%s",&laji);
	num=strlen(laji); 
	for(y=0;y<num;y++)
    {
    	if(laji[y]==',')
    	{
    		for(x=y;x<num;x++)
    		{
    			laji[x]=laji[x+1];
			}
			num--;
			y--;
		}
	}
	num=strlen(laji);
	for(y=0;y<num;y++)
	{
		if(laji[y]=='1')
		{
			sum[0]++;
		}
		else if(laji[y]=='2')
		{
			sum[1]++;
		}
		else if(laji[y]=='3')
		{
			sum[2]++;
		}
	}
	if(sum[1]!=0||sum[2]!=0)
	{
	    for(y=0;y<sum[0];y++)
	    {
	    	printf("1,"); 
	    }
    }
    else
    {
    	for(y=0;y<sum[0]-1;y++)
	    {
	    	printf("1,"); 
	    }
	    printf("1"); 
	}
	if(sum[2]!=0)
	{
		for(y=0;y<sum[1];y++)
	    {
	    	printf("2,");
	    }
	}
	else
	{
		for(y=0;y<sum[1]-1;y++)
	    {
		    printf("2,");
    	}
	    printf("2");
	 }
	if(sum[2]!=0)
	{
		for(y=0;y<sum[2]-1;y++)
	    {
		    printf("3,");
	    }
	    printf("3");
	}
	return 0;
}
