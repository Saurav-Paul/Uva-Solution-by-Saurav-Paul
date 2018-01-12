#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int st=0,mid,value,test,find_num,len;
long long ara[10000],position;
bool check;
int bin_search(int,int );

int main()
{

    cout<<"How much number in your array ? : ";
    cin>>len;
    cout<<"Enter the numbers : ";
    for(value=0; value<len; value++)
    {
        cin>>ara[value];
    }
    sort(ara,ara+len);
    cout<<"After sorted your array is : ";
    for(value=0; value<len; value++)
    {
        cout<<ara[value]<<" ";
    }
    cout<<"\n\nWhich number you want to check? Enter here : ";
    while(cin>>find_num)
    {
        st=0;
        check=bin_search(find_num,len);
        if(check)
        {
            cout<<"\nYour number is in array and the position is "<<position+1<<endl;
        }
        else
        {
            cout<<"\nThe number is not in this array .\n";
        }
        cout<<"\nWhich number you want to check? Enter here : ";
    }

}
int bin_search(int num,int sp)
{

    mid=(sp+st)/2;
    if(ara[mid]==num)
    {
        position=mid;
        return 1;
    }
    else if(num>ara[sp-1]|| num<ara[0])
    {
        return 0;
    }
    else if(mid>=sp&& mid<=0)
    {
        return 0;
    }

    else if(ara[mid]>num)
    {
        return bin_search(num,mid);
    }
    else
    {
        st=mid;
        return bin_search(num,len);
    }


}
