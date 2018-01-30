#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
int value=0,test_case;
double d,v,u,ans,s1,s2;
cin>>test_case;
while(test_case--){
    cin>>d>>v>>u;
     if(v>=u || u==0 || v==0){

            printf("Case %d: can't determine\n",++value);

            continue;

        }
        s1=d/u;
        s2=d/sqrt(u*u-v*v);
        ans=fabs(s1-s2);
        printf("Case %d: %.3lf\n",++value,ans);
}
return 0;
}
