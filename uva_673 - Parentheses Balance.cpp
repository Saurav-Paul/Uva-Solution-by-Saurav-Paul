#include<iostream>
#include<bits/stdc++.h>
using namespace std;
  int value,test_case,test,fbs,tbs,len,fbl,tbl;
int main()
{
    int value,test_case,test,fbs,tbs,len,fbl,tbl;
    bool check;
    char sen[1000],ch;
    cin>>test_case;
    gets(sen);
    for(test=0;test<test_case; test++)
    {
        gets(sen);
        tbs=tbl=fbs=fbl=0;
        check=true;
        len=strlen(sen);
        if(len%2!=0)
        {
            check=false;

        }
        for(value=0; value<len; value++)
        {
            if(sen[value]=='[')
            {
                tbs++;
            }
            if(sen[value]==']')
            {
                tbl++;
            }
            if(sen[value]=='(')
            {
                fbs++;
            }
            if(sen[value]==')')
            {
                fbl++;
            }
            if(tbs<tbl && sen[value]==']')
            {
                check=false;
            }
            if(fbs<fbl && sen[value]==')')
            {
                check=false;
            }
            if(sen[value]=='[' && sen[value+1]==')')
            {
                check=false;
            }

            if(sen[value]=='(' && sen[value+1]==']')
            {
                check=false;
            }
        }
        if(fbs!=fbl || tbs!=tbl)
        {
            check=false;

        }

        if(check)
        {
            cout<<"Yes"<<endl;
        }

        else
        {
            cout<<"No"<<endl;
        }
    }
    return 0;

}
