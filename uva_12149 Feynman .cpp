#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long long feynman(long long);
main(){
long long num;
while(cin>>num && num!=0){
    cout<<feynman(num)<<endl;
}

}
long long feynman(long long num){
if (num==1)
    return 1;
else
    return num*num+feynman(num-1);
}
