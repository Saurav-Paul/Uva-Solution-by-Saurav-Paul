#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
{
    char sentence[1000];
    bool a;
    int word=0,len,value,test;

    while(gets(sentence))
    {

        word=0;
        a=true;
        for(value=0; sentence[value]!='\0'; value++)
        {
            if((sentence[value]>='a' && sentence[value]<='z') || (sentence[value]>='A' && sentence[value]<='Z'))
            {
                if(a)
                {
                    word++;
                    a=false;
                }
            }
            else
            {
                a=true;
            }
        }

        cout<<word<<endl;
    }
}







