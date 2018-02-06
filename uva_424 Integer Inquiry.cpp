#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>

using namespace std;
string num1,num2,sum;
void sumIt(string,string);
main(){
    int z=1;
	while(cin>>num1 && num1!="0"){
		if(z)
            cin>>num2;
        else
            num2=sum;
		sumIt(num1,num2);
		z=0;

	}
	cout<<sum<<endl;
}
void sumIt(string n1,string n2){
int len1=n1.size(),len2=n2.size();
int carry,temp;
reverse(n1.begin(),n1.end());
reverse(n2.begin(),n2.end());
int len=min(len1,len2);
int i;
sum="";
for(i=0,carry=0;i<len;i++){
	temp=n1[i]-'0';
	temp+=n2[i]-'0';
	temp+=carry;
	if (temp>9){
		carry=1;
		sum.push_back((temp%10)+'0');
		}
	else
	{
	sum.push_back(temp+'0');
	carry=0;
	}

		}
if(len1>len2)	{	for(i=len;i<len1;i++)
	{
		temp=carry;
		temp+=(n1[i]-'0');
		if(temp>9){
		sum.push_back((temp%10)+'0');
		carry=1;
		}
		else {
			sum.push_back(temp+'0');
			carry=0;
		}
	}
}
if (len1<len2){

	for(i=len;i<len2;i++)
	{
		temp=carry;
		temp+=(n2[i]-'0');
		if(temp>9){
		sum.push_back((temp%10)+'0');
		carry=1;
		}
		else {
			sum.push_back(temp+'0');
			carry=0;
		}
	}
}
if(carry){

	sum.push_back(1+'0');
	i++;
}
reverse(sum.begin(),sum.end());

}
