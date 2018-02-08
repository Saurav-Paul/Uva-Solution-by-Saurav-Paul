#include<iostream>
using namespace std;
int main(){
int tcase,hr1,hr2,cost,temp;
cin>>tcase;
while(tcase--){
    cin>>hr1>>hr2>>cost;
    temp=cost*((2*hr1)-hr2)/(hr1+hr2);
    if(temp<=0)
        cout<<"0"<<endl;
    else
    cout<<temp<<endl;
}
}
