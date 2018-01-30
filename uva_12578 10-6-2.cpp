#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define PI acos(-1)
int main(){
int test_case;
double l,w,r,red,green;
cin>>test_case;
while(test_case--){
    cin>>l;
    w=(l*6)/10;
    r=(l/2)-(w/2);
    red=PI*r*r;
    green=(l*w)-red;
    printf("%.2lf %.2lf\n",red,green);
}
return 0;
}
