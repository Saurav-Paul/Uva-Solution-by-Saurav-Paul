#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch[100000],findch [100000];
    long long int value,temp,flen,chlen;
    while(scanf("%s",ch)!=EOF)
    {
        cin>>findch;
        temp=0;
        chlen=strlen(ch);
        flen=strlen(findch);

        for(value=0; value<flen && temp<chlen; value++)
            if(ch[temp]==findch[value])
                temp++;

        if(temp==chlen)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }

}
