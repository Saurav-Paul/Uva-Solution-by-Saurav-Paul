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
#define ull unsigned long long 
using namespace std;
bool file=0,rt=1;
clock_t tStart ;
void FAST_IO();
////////////////////////
ull ara[25][160];
ull gcd(ull a, ull b){
    if(b==0)
        return a;
    return gcd(b,a%b);
}
ull find_Way(ull n, ull v,ull x){

    if(n==0){
        if(v>=x){
            return 1;
        }
        else
            return 0;
    }
    if(ara[n][v]!=-1)
        return ara[n][v];
    ull temp=0;
    for(int i=1;i<=6;i++){
        temp+=find_Way(n-1,v+i,x);
    }
    ara[n][v]=temp;
    return ara[n][v];


}
int main()
{

    FAST_IO();
    ////////////////////////
    
    ull n,x;
    while(cin>>n>>x){
        if(!n && !x)
            break ;
        memset(ara,-1,sizeof(ara));
        ull way=find_Way(n,0,x);
        ull total=pow(6,n);

        ull div=gcd(way,total);
        way/=div;
        total/=div;
        if(way==0)
            cout<<0<<endl;
        else if (total==1)
            cout<<way<<endl;
        else
            cout<<way<<"/"<<total<<endl;


    }


    ////////////////////////
    if(rt && file){
     printf("\nTime taken: %.6fs", (double)(clock() - tStart)/CLOCKS_PER_SEC);
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
