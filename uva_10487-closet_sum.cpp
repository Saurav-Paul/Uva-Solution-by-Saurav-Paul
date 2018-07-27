#include <iostream>
#include<cmath>
#include<vector>
using namespace std;
int main()
{

    int  n, num, ncnt=1;
    while(cin>>n  && n)
    {
        vector<long long int> ara;
        cout<<"Case "<<ncnt++<<":"<<endl;
        long long int temp,uttor,tnum, gnum,value,i;
        value;
        ara.empty();
        for(  value = 0; value < n; value++ )
        {

            cin>>temp;
            ara.push_back(temp);
        }


        cin>>num;

        while(num--)
        {

            cin>>gnum;
            uttor=ara[0]+ara[1];
            for( value = 0; value < n; value++ )
            {
                for(  i = value+1; i < n; i++ )
                {

                    tnum = ara[value] + ara[i];
                    if( abs(uttor - gnum) > abs(tnum - gnum))
                    {
                        uttor = tnum;

                    }

                }

            }

            cout<<"Closest sum to "<<gnum<<" is "<<uttor<<"."<<endl;

        }
    }
    return 0;
}
