#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int len,value,sum,temp;
  char num[10000];
  while(gets(num))
  {
      len=strlen(num);
      temp=0;
      if(num[0]=='0' && len==1)
      {
          break;
      }
      for(value=0;value<len;value++)
      {
        sum=temp*10+(num[value]-'0');
        temp=sum%17;
      }
      if(temp)
      {
          cout<<"0"<<endl;
      }
      else{
        cout<<"1"<<endl;
      }
  }

}
