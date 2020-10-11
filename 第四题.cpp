#include<stdio.h>
#include<string.h>
int main() 
{
    int num=0;
    char zifu[100];
    int x=0;
    int y=0;
    int z=-1;
    int time=0;
    zifu[0]='1';
    scanf("%s",&zifu);
    time=strlen(zifu);
	for(x=0;x<time;x++)
	{
		if(zifu[x]==','||zifu[x]=='，')
		{
			y++;
		}
		else if(zifu[x]>='0'&&zifu[x]<='9')
		{
			num=0;
			while(zifu[x]>='0'&&zifu[x]<='9')
			{
				z=zifu[x]-'0';
				num=num*10+z;
				x++;
			}
			x--;
			if(y==num)
			{
				z=y;
				break;
			}
		} 
	}
	printf("%d",z);
	return 0;
}
