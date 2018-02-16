#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
string ch="";
unsigned long long sum;
void scew_bin(){
    char c;
    int j=1,len=ch.size();
for(size_t i=len-1;i>=0;i--){
    sum+=((ch[i]-'0')*(pow(2,j)-1));
    j++;
    if(i==0)
        return;
}


}
int main(){
while(cin>>ch && ch!="0"){
    sum=0;
    scew_bin();
    cout<<sum<<endl;
    ch="";
}

}
