#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{

char ch[10010],c[1000],word[1000],k;
int i,temp=0,high=0,j;
for(i=0;;i++){
        scanf("%c",&k);
    ch[i]=k;
    if(i>3 && (ch[i]=='D'&&ch[i-1]=='-' &&ch[i-2]=='N' && ch[i-3]=='-' && ch[i-4]=='E')){
        break;

    }
    if((ch[i]>='A'&&ch[i]<='Z')||(ch[i]>='a' && ch[i]<='z') || ch[i]=='-'){
        c[temp]=ch[i];
        temp++;
    }
    else
    {
        if(temp>high){
            high=temp;
            for( j=0;j<high;j++){
             word[j]=tolower(c[j]);
            }
            word[high]=='\0';

        }
        temp=0;
    }
}
 for( j=0;j<high;j++){
             cout<<word[j];
            }
            cout<<endl;

}

