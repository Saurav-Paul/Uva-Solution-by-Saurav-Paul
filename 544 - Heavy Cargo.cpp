#include<bits/stdc++.h>
using namespace std;
int cn = 0;
class obj{
	public : 
		int u,cost;
	obj(int a ,int x){
		u = a , cost = x;
	}
	
};

class Compare{
	public :
		bool operator() (obj &x , obj &y){
			return x.cost < y.cost ;
		}
	
};


void solve(int city , int road){
	map < string , int > code;
	vector <int> parrent(city+1);
	
	bool notvisited[city+5];
	memset(notvisited,1,sizeof(notvisited));
	
	priority_queue<obj,vector<obj>, Compare> pq;
	
	vector < obj > graph[city + 10];
	
	int assign = 1;
	
	for(int i = 0 ; i < road ; i++){
		string s , t;
		int cost ;
		cin >> s >> t >> cost;
		if(code.find(s) == code.end())
			code[s] = assign ++;
		if(code.find(t) == code.end())
			code[t] = assign ++;
			
		int a = code[s] ; int  b = code[t];
		obj temp(b,cost);
		obj temp2(a,cost);
		graph[a].emplace_back(temp);
		graph[b].emplace_back(temp2);
		
	}
	
	string start, stop;
	cin >> start >> stop;
	int st = code[start] , sp = code[stop];
	int mn = 0;
	for(auto x : graph[st])
		pq.push(x),mn=max(mn,x.cost);
	
	while(!pq.empty()){
		
		obj temp = pq.top();
		pq.pop();
		if(notvisited[temp.u]==false)
			continue ;
		mn = min(mn,temp.cost);
		
		if(temp.u==sp)
			break ;
		
		notvisited[temp.u]=false;
		for(auto x : graph[temp.u])
			pq.push(x);
		
	}
	cout << "Scenario #"<<++cn<<endl;
	cout << mn <<" tons"<< endl << endl;
}

int main(){
	
	ios_base::sync_with_stdio(false);
	int city,road;
	while(cin >> city >> road && !(road==0 and city==0))
		solve(city,road);
		
	return 0;
}
