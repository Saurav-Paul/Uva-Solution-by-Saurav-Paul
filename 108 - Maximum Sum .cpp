				/*Saurav Paul*/
#include<bits/stdc++.h>
using namespace std;

void solve(int n) {
    vector<vector<int> > v(n+1,vector<int>(n+1)) , lr,ud ;
    lr = ud = v ;
    for(int i = 1 ; i <= n; i++){
        for(int j = 1; j <= n ; j++){
            cin >> v[i][j] ;
        }
    }

    for(int i = 1 ; i <= n; i++){
        for(int j = 1; j <= n; j++){
            lr[i][j] = lr[i][j-1] + v[i][j];
            ud[j][i] = ud[j-1][i] + v[i][j] ;
        }
    }
    long long mx = -INT_MAX ;

    for(int r1 = 1 ; r1 <= n; r1 ++){
        for(int r2 = r1 ; r2 <= n ; r2 ++){
            for(int c1= 1 ; c1 <= n ; c1 ++){
                long long temp = 0 ;
                for(int c2 = c1; c2 <= n ; c2 ++){
                    temp += ud[r2][c2] - ud[r1-1][c2] ;
                    mx = max(mx, temp) ;
                }
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
