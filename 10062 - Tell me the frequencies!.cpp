#include<bits/stdc++.h>
using namespace std;
bool custom_sort(pair<int,int> a, pair<int,int> b){
	if(a.second==b.second)
		return a.first > b.first ;
	return a.second < b.second ;
}
int main(){
	ios_base::sync_with_stdio(0);
	string s;
	bool space = false;
	while(getline(cin,s)){
		if(space)
			cout << "\n";
		map <int, int > m;
		vector< pair<int, int> >ans;
		int sz=s.size();
		for(int i=0; i< sz ; ++i){
			int temp=(int)(s[i]);
			m[temp]++;
		}
		for(auto x : m){
			if(x.second){
				ans.emplace_back(x.first,x.second);
			}
		}
		sort(ans.begin(), ans.end(),custom_sort);
		for(auto x : ans){
			cout<<x.first<<" "<<x.second<<"\n";
		}
		space = true ;
		
	}
	
	return 0;
}
