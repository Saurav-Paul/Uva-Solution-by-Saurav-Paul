#include<iostream>
#include<cstdio>
using namespace std;
long long unsigned Catalan(long long unsigned n){
  if(n<=1)
    return 1;
  unsigned long long sum=0;
  for(size_t i=0;i<n;i++){
    sum+=Catalan(i)*Catalan(n-i-1);
  }
return sum;

}
int main(){
    //freopen("output.txt","w",stdout);
    int num;
    bool flag=false;
while(cin>>num){
        if(flag)
        cout<<endl;
    cout<<Catalan(num)<<endl;
flag=true;
}

}
