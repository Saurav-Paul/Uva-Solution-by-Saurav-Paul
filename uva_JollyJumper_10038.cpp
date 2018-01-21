#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int ara_1[5000],ara_2[5000],value,test,a,n,temp;
    while(cin>>n)
    {
        a=1;
        for(value=0; value<n; value++)
        {
            cin>>ara_1[value];
        }
        for(value=0; value<n-1; value++)
        {

            ara_2[value]=abs(ara_1[value]-ara_1[value+1]);

        }
        sort(ara_2,ara_2+(n-1));

        if(ara_2[0]==1)
            {

             for(value=1,test=0;value<n;value++,test++)
             {
               if(ara_2[test]!=value)
              {
                  a=0;
                  break;
              }

             }
            }

         else{
            a=0;
         }


        if(n==1)
            a=1;


        if(a) cout<<"Jolly"<<endl;

        else cout<<"Not jolly"<<endl;
        a=1;

    }
}
