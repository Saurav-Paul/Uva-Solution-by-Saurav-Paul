#include<iostream>
#include<cstdio>
#include<cmath>
#include<vector>
using namespace std;
vector<int> primelist;
bool check[1000090];
void sieve(int n){
    int limit=sqrt(n*1.0)+1;
    primelist.push_back(2);
check[0]=check[1]=1;
for(int i=4;i<=n;i+=2)
    check[i]=1;
for(int i=3;i<=n;i+=2){
    if(!check[i]){
        primelist.push_back(i);
        if(i<=limit){
            for(int j=i*i;j<=n;j+=2*i){
                check[j]=1;
            }
        }
    }
}
}
int main(){
sieve(1000080);
//freopen("output.txt","w",stdout);
int num;
while (cin>>num && num){
    int cnt=0;
for(int i=0;;i++){
    if(primelist[i]>num)
        break;
    if(num%primelist[i]==0)
        cnt++;
}
cout<<num<<" : "<<cnt<<endl;
}
}
