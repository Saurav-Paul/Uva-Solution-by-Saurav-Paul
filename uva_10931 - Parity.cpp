#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
string ch="";
int cnt;
void bin(int n)
{
 while(n){
    int j=n%2;
    if(j==1)
        cnt++;
    ch.push_back(j+'0');
    n/=2;
 }
 reverse(ch.begin(),ch.end());
 return ;
}
int main(){
//freopen("output.txt","w",stdout);
int num;
while(cin>>num && num){
        ch="";
cnt=0;
bin(num);
    cout<<"The parity of "<<ch<<" is "<<cnt<<" (mod 2)."<<endl;

}

}
