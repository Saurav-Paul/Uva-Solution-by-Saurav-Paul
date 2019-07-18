#include<bits/stdc++.h>
using namespace std;
inline double cal (double x ,int t){
	double ans = (x*100.0/t) ;
	return ans;
}
void solve(){
	map < string , int > mymap;
	string s;
	int total = 0;
	while(getline(cin,s) and s!=""){
		mymap[s]++;
		total ++;
	}
	for(auto x : mymap){
		cout<<x.first<<" "<<fixed<<setprecision(4)<<cal(x.second,total)<<endl;
	}
	return ;
}

int main(){
	ios_base::sync_with_stdio(false);
	int t; cin>>t;
	string s ; getline(cin,s);
	getline(cin,s);
	while(t--)
		solve(),cout<<(t?"\n":"");
}
