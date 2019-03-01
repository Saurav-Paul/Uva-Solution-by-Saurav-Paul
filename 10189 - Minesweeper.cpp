#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
#define loop(a,b)             for(int i=a;i<=b;++i)
#define pb                    push_back
#define F                     first
#define S                     second
#define mp                    make_pair
#define clr(x)                x.clear()
#define MOD                   1000000007
#define itoc(c)               ((char)(((int)'0')+c))
#define vi                    vector<int>
#define all(p)                p.begin(),p.end()
#define mid(s,e)              (s+(e-s)/2)
#define sv()                  ll t,n; scanf("%lld",&t);n=t; while(t--)
#define tcase()               ll t,n; cin>>t;n=t; while(t--)
#define iscn(num)             scanf("%d",&num);
using namespace std;
using namespace std;
bool file=0,rt=0;
clock_t tStart ;
void FAST_IO();
////////////////////////
char grid[105][105];
void find_it(int x, int y);
int main()
{

    FAST_IO();
    ////////////////////////

    ll row,col;
    int cnt=0;
    bool flag=0;
    while(cin>>row>>col){
        if(!row && !col){
            break;
        }
        if(flag)
        cout<<endl;
        flag=1;
        cout<<"Field #"<<++cnt<<":"<<endl;
        memset(grid,0,sizeof(grid));
        for(int i=1;i<=row;i++){
            for(int j=1;j<=col;j++){
                cin>>grid[i][j];
            }
            char c;
            
        }
        for(int i=1;i<=row;i++){
            for(int j=1;j<=col;j++){
                if(grid[i][j]=='.')
                {
                    //cout<<endl<<i<<" "<<j<<endl;
                    find_it(i,j);
                }
                cout<<grid[i][j];
            }
            
           cout<<endl;
        }

      }


    ////////////////////////
    if(rt && file){
     printf("\nTime taken: %.6fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
    }
    return 0;
   }

void FAST_IO()
{
    ios_base::sync_with_stdio(0);
    //cin.tie(NULL);
    //cout.tie(NULL);
    //cout.setf(ios::fixed);
    //cout.precision(2);
    if(rt && file){ tStart = clock(); }
    if(file){
    #ifndef _offline
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    }
}

void find_it(int x, int y){

    ll cnt=0;
    char c='*';
    if(grid[x+1][y]==c)
        cnt++;
    if(grid[x-1][y]==c)
        cnt++;
    if(grid[x][y+1]==c)
        cnt++;
    if(grid[x][y-1]==c)
        cnt++;
    if(grid[x+1][y+1]==c)
        cnt++;
    if(grid[x+1][y-1]==c)
        cnt++;
    if(grid[x-1][y+1]==c)
        cnt++;
    if(grid[x-1][y-1]==c)
        cnt++;

    grid[x][y]=cnt+'0';

}
