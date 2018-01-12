#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main()
{
int len,i,j,sp,st,value,test;
char ch[3000];
while(gets(ch))
{
    len=strlen(ch);
    st=0;
    for(value=0;value<len;value++)
    {
        if(ch[value]==32)
        {
            sp=value-1;
            for(test=sp;test>=st;test--)
            {
                cout<<ch[test];
            }
            cout<<" ";
            test=value;

            st=value+1;


        }
        if(value==len-1)
        {
            for(test=value;test>=st;test--)
            {
                cout<<ch[test];
            }
        }
    }
    cout<<endl;
}

}







/*int main()
{
    int len,value;
    char ch[100];
    while(cin>>ch)
    {
      len=strlen(ch)-1;
      for(value=len;value>=0;value--)
            cout<<ch[value];

      cout<<" ";
    }


}
*/
