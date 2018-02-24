#include<iostream>
#include<cstdio>
using namespace std;
int main(){
//freopen("output.txt","w",stdout);
int tcase,cAse=0;
string c="";
cin>>tcase;
while(tcase--){
 double num,sum=0;
cin>>num;
sum+=(num*.5);
//char ch;
getline(cin,c);
if(c.size()>3){
num=c[3]-'0';
sum+=(num*.05);
}
/*scanf("%c%c%c",&ch,&ch,&ch);
if(ch!='\n'){
    cin>>num;
scanf("%c%c%c",&ch,&ch,&ch);
        sum+=(num*.05);

}
*/
cout<<"Case "<<++cAse<<": "<<sum<<endl;
}
}
