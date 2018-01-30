#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
int road,N,n,cont=0;
while(cin>>road>>N && road!=0 && N!=0){
    n=(road/N);
    if(road%N==0)
        n--;
    cout<<"Case "<<++cont<<": ";
    (n<27)?cout<<n<<endl : cout<<"impossible"<<endl;;
}
return 0;
}


