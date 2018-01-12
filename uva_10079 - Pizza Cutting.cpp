#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
long long int npizza,value,n;
while(cin>>n && n>=0)
{
    npizza=1;
    for(value=1;value<=n;value++)
        npizza+=value;

    cout<<npizza<<endl;
}
}
