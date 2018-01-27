#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    int test_case,negg,p,q,temp,value,test,cont,ncase;
    cin>>test_case;
    for(ncase=1; ncase<=test_case; ncase++)
    {
        cin>>negg>>p>>q;
        int gm[negg];
        for(value=0; value<negg; value++)
        {
            cin>>gm[value];
        }
        sort(gm,gm+(negg-1));
        for(cont=1,temp=value=0; value<negg; value++,cont++)
        {
            if(cont>p )
            {
                cont--;
                break;
            }
            if (temp+gm[value]>q)
            {
                cont--;
                break;
            }
            temp+=gm[value];
        }
      if(cont>negg)
        cont=negg;
        cout<<"Case "<<ncase<<": "<<cont<<endl;

    }


}
