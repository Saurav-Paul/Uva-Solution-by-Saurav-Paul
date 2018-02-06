#include<iostream>
#include<bits/stdc++.h>
using namespace std;
main(){
int tcase,sum,i,n,temp;
cin>>tcase;
while(tcase--){
    for(i=sum=0;i<4;i++){
            cin>>n;
        sum+=(n%10);
        n/=10;
        temp=(2*(n%10));
        sum+=((temp%10)+(temp/10));
        n/=10;
        sum+=(n%10);
        n/=10;
        temp=(2*(n%10));
        sum+=((temp%10)+(temp/10));


}
    if(sum%10==0)
        cout<<"Valid"<<endl;
    else
        cout<<"Invalid"<<endl;

}
}
