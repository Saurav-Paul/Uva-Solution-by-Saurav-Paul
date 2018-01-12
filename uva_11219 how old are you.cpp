#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test_case,bdate,bmonth,byear,age,cdate,cmonth,cyear,cont=0;
    char ch;
    bool a,b,c;
    cin>>test_case;
    while(test_case--)
    {
        cont++;
        a=0,b=0,c=0;
        cin>>cdate>>ch>>cmonth>>ch>>cyear>>bdate>>ch>>bmonth>>ch>>byear;
        if((cyear<byear) || (cyear==byear  && cmonth<bmonth) || (cyear==byear  && cmonth==bmonth && cdate<bdate))
        {
            a=1;
        }
        if(cyear>byear)
        {
            b=1;
            if(cmonth==bmonth)
            {
                if(cdate>bdate)

                {
                    age=cyear-byear;
                }
                else{age=(cyear-byear)-1;}
            }
            if(cmonth>bmonth)
            {
                age=cyear-byear;
            }
            if(cmonth<bmonth)
            {
                age=(cyear-byear)-1;
            }
            if(age>130)
            {
                b=0; c=1;
            }

        }
        if(cyear==byear && cmonth==bmonth && cdate==bdate)
        {
            b=1;
            a=c=age=0;
        }

        if(a)
        {
            printf("Case #%d: Invalid birth date\n",cont);

        }
        if(b)
        {
            printf("Case #%d: %d\n",cont,age);
        }
        if(c)
        {
           printf("Case #%d: Check birth date\n",cont);
        }


    }
}
