#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long books,i,j,value,price,bI, bJ;

    while(cin>>books)
    {
        int book[books];
        for(value=0; value<books; value++)
        {
            cin>>book[value];
        }
        sort(book,book+books);
        cin>>price;
      for(i=0,j=books-1;i<j;){
        if(book[i]+book[j]<price){
            i++;
        }
        else if(book[i]+book[j]==price){
            bI=i;
            bJ=j;
            i++;
            j--;
        }
        else{
            j--;
        }
      }



        cout << "Peter should buy books whose prices are " << book[bI] << " and " << book[bJ] << ".\n\n";
    }


}


