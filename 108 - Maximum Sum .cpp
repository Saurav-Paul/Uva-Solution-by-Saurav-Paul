				/*Saurav Paul*/
#include<bits/stdc++.h>
using namespace std;

void solve(int n) {
    vector<vector<int> > v(n+1,vector<int>(n+1)) ,ud ;
    ud = v ;
    for(int i = 1 ; i <= n; i++){
        for(int j = 1; j <= n ; j++){
            cin >> v[i][j] ;
        }
    }

    for(int i = 1 ; i <= n; i++){
        for(int j = 1; j <= n; j++){
            ud[j][i] = ud[j-1][i] + v[i][j] ;
        }
    }
    long long mx = -INT_MAX ;

    for(int r1 = 1 ; r1 <= n; r1 ++){
        for(int r2 = r1 ; r2 <= n ; r2 ++){
            long long temp = 0 ;
            for(int c = 1 ; c <= n ; c++){
                temp += ud[r2][c] - ud[r1-1][c] ;
                if(temp > mx) mx = temp ;
                if(temp < 0) temp = 0 ;
            }

        }
    }
    
    cout << mx << endl ; 
}

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n ;
    while(cin >> n){
        solve(n) ;
    }

    return 0;
}
