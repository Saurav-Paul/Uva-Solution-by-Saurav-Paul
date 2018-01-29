#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){

int test_case,test=0;
double u,v,t,a,s,ans1,ans2;
while(cin>>test_case && test_case!=0){
    switch(test_case){
        case 1:{
           cin>>u>>v>>t;
           s=(u*t+.5*(v-u)*t);
           a=(v*v-u*u)/(2*s);
           ans1=s;
           ans2=a;
           break;
        }
        case 2:{
           cin>>u>>v>>a;
           s=(v*v-u*u)/(2*a);
           t=(v-u)/a ;
           ans1=s;
           ans2=t;
           break;
        }
        case 3:{
        cin>>u>>a>>s;
        v=sqrt((u*u)+(2*a*s));
        t=(v-u)/a ;
        ans1=v;
        ans2=t;
        break;
        }
        case 4:{
        cin>>v>>a>>s;
        u=sqrt((v*v)-(2*a*s));
        t=(v-u)/a ;
        ans1=u;
        ans2=t;
        break;
        }
}
printf("Case %d: %.3lf %.3lf\n",++test,ans1,ans2);

}

}
