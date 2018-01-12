#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    char a[100];
    int b=0;
    gets(a);
    int len=strlen(a),value,ini;
    for( value=len-1, ini=1;value>=0;value--,ini*=10)
    {
        b+=((a[value]-'0')*ini);
    }
    cout<<"int b = "<<b;
}
