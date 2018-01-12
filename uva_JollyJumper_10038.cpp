#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int ara_1[5000],ara_2[5000],value,test,a,n;
    while(cin>>n)
    {
        a=1;
        for(value=0; value<n; value++)
        {
            cin>>ara_1[value];
        }
        for(value=1; value<n-1; value++)
        {
            ara_2[value]=abs(ara_1[value]-ara_1[value-1]);
        }
        sort(ara_2,ara_2+value);
        for(value=1; value<n; value++)
        {
            if(ara_2[value]==ara_2[value-1])
            {
                a=0;
                break;
            }
        }

        if(a==0) cout<<"Not jolly"<<endl;

        else cout<<"Jolly"<<endl;

    }
}
