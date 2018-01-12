#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    bool c=true;
    char ch;
    while(scanf("%c",&ch)!=EOF)
    {
        if(ch=='"' && c==true)
        {
            printf("``");
            c=false;
        }
        else   if(ch=='"' && c==false)
        {
            printf("''");
            c=true;
        }
        else
        {
            printf("%c",ch);
        }
    }

}
