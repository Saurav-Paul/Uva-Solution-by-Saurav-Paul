
/**
 *    author        : Saurav Paul 
 *    created       : August 28, 2020 11:36 AM
 *    Problem Name  : 796 - Critical Links
 *    Problem Limit : 3000 ms , 32 MB
 *    Problem Url   : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=737
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;

class TC{

    int N ;
    vector<vector<int>> graph ;

    int timer = 0 ;
    vector<int> tin , low ;
    set<pair<int,int>> cut_bridges ;
    vector<bool> vis ;

    void dfs(int node, int par = -1){
        vis[node] = true ;
        low[node] = tin[node] = timer++ ;

        for(int to : graph[node]){
            if(to == par) continue ;
            if(vis[to]){
                low[node] = min(low[node] , tin[to]) ;
            }
            else{
                dfs(to,node) ;
                low[node] = min(low[node],low[to]) ;
                if(low[to] > tin[node]){
                    int _u = node, _v = to ;
                    if(_u > _v) swap(_u,_v) ;
                    cut_bridges.insert({_u,_v}) ;
                }
            }
        }
    }

    void find_cut_bridge(){
        vis.assign(N+1,false) ;
        tin.assign(N+1,-1) ;
        low.assign(N+1,-1) ;

        for(int i = 0 ; i < N ; i++){
            if(!vis[i])
                dfs(i) ;
        }

        int found = cut_bridges.size() ;
        printf("%d critical links\n",found) ;
        for(auto bridge : cut_bridges){
            printf("%d - %d\n",bridge.first,bridge.second) ;
        }
        puts("") ;
    }

    public :
    void solve(){
        for(int i = 0 ; i < N ; i++){
            int u , n , v;
            scanf("%d (%d)",&u,&n) ;

            while(n--){
                scanf("%d",&v) ;
                graph[u].emplace_back(v) ;
            }
        }
        find_cut_bridge() ;
    }
    TC(int _n){
        N = _n ;
        graph = vector<vector<int>>(N+1) ;
    }
};

int main(){

    int n ;
    while(scanf("%d",&n) != EOF){
        TC tc(n);
        tc.solve() ;
    }

    return 0 ;
}
