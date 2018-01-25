#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test_case, test,value,temp,ans;
    char ch[1000],sign;
    cin>>test_case;
    gets(ch);
    while(test_case--)
    {
        gets(ch);
        int len=strlen(ch);
        if(ch[len-2]=='3'&& ch[len-1]=='5')
            sign='-';
        else if(ch[0]=='9' && ch[len-1]=='4')
            sign='*';
        else if(ch[0]=='1' && ch[1]=='9' && ch[2]=='0')
            sign='?';
        else
            sign='+';
        cout<<sign<<endl;
    }
}
