#include<bits/stdc++.h>
using namespace std;
using pii = pair<int,int> ;
using vec = vector< vector<pii> > ;
const int INF = 1e9 + 90;

void solve(){

    int node, edge;
    scanf("%d%d",&node,&edge);

    vec graph(node+1);
    for(int i= 0; i < edge ; i++){
        int u , v, cost;
        scanf("%d%d%d",&u,&v,&cost);

        graph[u].emplace_back(v,cost);
    }

    vector<int> dist(node+1,INF);
    dist[0]=0;

    for(int i = 1; i < node ; i++){
        for(int j = 0 ; j < node; j++){
            for(auto x : graph[j]){
                dist[x.first] = min(dist[x.first],
                                dist[j]+x.second);
                if(dist[x.first] < 0){
                    puts("possible");
                    return ;
                }
            }
        }
    }

    for(int j = 0 ; j < node ; j++){
        for(auto x : graph[j]){
            if(dist[x.first]> dist[j]+x.second){
                puts("possible");
                return ;
            }
        }
    }


    puts("not possible");
    return ;
}

int main(){
    int testcase;
    scanf("%d",&testcase);
    while(testcase--)
        solve();

    return 0;
}
