				/*Saurav Paul*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int ;
vector<int> primelist;

void sieve(int lim){
    bool rem[lim+70]={};
    primelist.emplace_back(2);

    for(int i =4 ; i <= lim ; i+=2)
        rem[i] = true;
    for(int i = 3 ; i <= lim ; i+= 2){
        if(rem[i]==false){
            primelist.emplace_back(i);
            for(int j = 2*i + i ; j <= lim ; j += 2*i)
                rem[j] = true;
        }
    }
}
class obj{
    public :
        long long a , b , w ;
    obj(long long x){
        w = x;
    }
    void set(long long x1,long long x2,long long x3){
        b = x1 , a = x2 , w = x3;
    }
};
obj mn(INT_MAX) , mx(0) ;
int cnt = 0 ;

void bestPrimes(long long l , long long r){

	bool notPrime[r-l+1] ;
	memset(notPrime,0,sizeof(notPrime));
	
	// marking those number , they are not prime between l to r
	for (auto x : primelist){
		
		if(x*x>r)
			break ;
		long long  base = l/x;
		base*=x;
		if(base < l)
			base += x;
		
		
		for(long long  i=base ; i<=r ; i+=x){
			notPrime[i-l] = 1;
			
		}
		if(base == x ){
			notPrime[base-l] = 0;
			
		}
		
	}
	// printing the primes between l to r...
	if(l<=1){
		if(l==0)
			notPrime[1] = 1;
		if(l==1)
			notPrime[0] = 1;
	}
    long long  xtra ;
	for(long long  i=0; i<=r-l; i++){
		
		if(!notPrime[i] ){
			long long  temp = i + l;
            ++cnt ;
            if(cnt > 1){
                long long t = temp - xtra ;
                if(t < mn.w){
                    mn.set(temp,xtra,t) ;
                }
                if(t > mx.w) {
                    mx.set(temp,xtra,t) ;
                }
            }
            xtra = temp ; 
            
		}
	}
	
	
}

void solve(long long l , long long u) {

    bestPrimes(l,u) ;
    if(cnt < 2){
        cout << "There are no adjacent primes." << endl ;
    }
    else{
        cout <<mn.a<<","<<mn.b<<" are closest, "<< mx.a<<","<<mx.b<<" are most distant." << endl ;
    }
    cnt = 0 ;
    mx.w = 0 ;
    mn.w = INT_MAX ;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    sieve(1000000) ;

    long long l , u ;
    while(cin >> l >> u) 
        solve(l,u);

    return 0;
}
