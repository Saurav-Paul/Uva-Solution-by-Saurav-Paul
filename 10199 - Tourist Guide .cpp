
/**
 *    author        : Saurav Paul 
 *    created       : August 28, 2020 9:44 AM
 *    Problem Name  : 10199 - Tourist Guide
 *    Problem Limit : 3000 ms , 32 MB
 *    Problem Url   : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=13&page=show_problem&problem=1140
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;

class TC{

    static const int nax = 111 ;
    map<string,int> mapping ;
    vector<string> cities ;
    vector<int> graph[nax] ;
    int N , M ;
    int cnt = 0 ;


    int timer = 0 ;
    set<string> cut_vertex ;
    int vis[nax] = {} ;
    vector<int> tin , low ;

    void dfs(int node, int par = -1){
        vis[node] = true ;
        low[node] = tin[node] = timer++;

        int child = 0 ;
        for(int nxt : graph[node]){
            if(node == par) continue ;
            if(vis[nxt]){
                low[node] = min(low[node],tin[nxt]) ;
            }
            else{
                child ++;
                dfs(nxt,node) ;
                low[node] = min(low[node],low[nxt]) ;

                if(tin[node] <= low[nxt] && par != -1){
                    cut_vertex.insert(cities[node]) ;
                }
            }
        }

        if(par == -1 && child > 1) cut_vertex.insert(cities[node]) ;
    }

    void find_cut_vertex(){
        tin.assign(N+1,-1) ;
        low.assign(N+1,-1) ;

        for(int i = 1 ; i <= N ; i++){
            if(!vis[i])
                dfs(i) ;
        }
        
        int found = cut_vertex.size() ;
        cout << found <<" camera(s) found\n" ;
        
        for(auto point : cut_vertex){
            cout << point <<"\n" ;
        }

    }

    public :
    void solve(){

        cities.assign(N+1,"") ;
        for(int i = 1 ; i <= N ; i++){
            cin >> cities[i];
            if(mapping[cities[i]] == 0){
                mapping[cities[i]] = ++cnt ;
            }
        }

        assert(N==cnt) ;
        cin >> M ;

        for(int i = 1 ; i <= M ; i++){
            string u , v;
            cin >> u >> v;
            int _u = city_no(u) , _v = city_no(v) ;
            graph[_u].emplace_back(_v) ;
            graph[_v].emplace_back(_u) ;
        }

        find_cut_vertex() ;
    }
    int city_no(string &city){
        int number = mapping[city] ;
        assert(number) ;
        return number ;
    }
    TC(int _N,int caseno){
        N = _N ;
        cout <<"City map #" << caseno <<": " ;
    }
};

int main(){
    ios_base::sync_with_stdio(false);

    int n , caseno = 0 ;
    while(cin>>n && n){
        if(caseno) cout <<"\n" ;
        TC tc(n,++caseno) ;
        tc.solve() ;
    }
    return 0 ;
}
