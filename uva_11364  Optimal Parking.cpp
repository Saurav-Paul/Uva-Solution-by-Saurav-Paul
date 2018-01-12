#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
long long int nmax,nmin,test_case,value,n;
cin>>test_case;
while(test_case--)
{
    cin>>value;
    cin>>n;
    value--;
    nmax=nmin=n;
    while(value--)
    {
        cin>>n;
        if(n>nmax)
            nmax=n;
        if(n<nmin)
            nmin=n;
    }
    cout<<(nmax-nmin)*2<<endl;
}

}
