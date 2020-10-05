#include<stdio.h>
#include<iostream>
#include <string>
#include<vector>
using namespace std;
bool raoluan(string s1,string s2)
{
    if(s1==s2)  return true;
    int arr[26]={0};
    for(int i=0;i<s1.length();++i)
	{
	    arr[s1[i]-'a']++;
	    arr[s2[i]-'a']--;
	}
    for(int i=0;i<26;++i)
	{
	    if(arr[i])
	    {
	        return false;
	    }
    }
    for(int i=1;i<s1.length();++i)
	{
        if(raoluan(s1.substr(0,i),s2.substr(0,i))&&raoluan(s1.substr(i),s2.substr(i)))
		{
		   return true;
	    }
        if(raoluan(s1.substr(0,i),s2.substr(s1.length()-i))&&raoluan(s1.substr(i),s2.substr(0,s1.length()-i)))
		{
		   return true;
	    }
    }
        return false;
}
int main()
{
	string s1;
	string s2;
	scanf("%s",&s1);
	scanf("%s",&s2);
	raoluan(s1, s2);
	printf("%d",raoluan);
	return 0;
}
