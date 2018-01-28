#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
int test_case,key,value,cont=0;
char ch[200],c;
cin>>test_case;
gets(ch);
while(test_case--){
    gets(ch);
    key=0;
    cont++;
    for(value=0;value<strlen(ch);value++){
        c=ch[value];
        c=tolower(c);
        if(c=='a' || c=='d' ||  c=='g'||c=='j' || c=='m' || c=='m'||c=='p'||c=='t'||c=='w'||c==' ')
            key+=1;
       else  if(c=='b' || c=='e' || c=='h'|| c=='k' || c=='n' || c=='q'||c=='u'||c=='x')
            key+=2;
       else  if(c=='c' || c=='f' || c=='i'|| c=='l' || c=='o' || c=='p'||c=='r'||c=='y'|| c=='v')
            key+=3;
        else
            key+=4;
    }
    cout<<"Case #"<<cont<<": "<<key<<endl;
}
}
