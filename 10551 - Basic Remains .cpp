				/*Saurav Paul*/
#include<bits/stdc++.h>
using namespace std;



long long int BigMod(long long int num , long long int power, long long int mod){
  
  if(power == 0 ){
    return 1%mod ;
  }
  long long int x = 1 ;
  if(power&1){
    x = num ;
  }
  long long int y = BigMod(num,power/2,mod) ;
  y = ( y%mod * y%mod )%mod ;
  return (y%mod * x%mod)%mod ;
}

long long int toDeci(string smod , long long int b){
  long long int ans = 0 ;
  for(int i = smod.size()-1, cnt = 0 ; i >= 0 ; i--, cnt++){
    int a = smod[i]-'0';
    ans += ( a * pow(b,cnt) ) ;
  }
  return ans ;
}

void print_ans(long long int ans, long long int b){
  string temp = "" ;
  
  while(ans){
    temp += (ans%b + '0') ;
    ans /= b ;
  }
  reverse(temp.begin(),temp.end()) ;
  cout<< (temp.size()==0 ? "0" : temp) << endl ;
}

void solve(long long int b) {
  string num , smod;
  cin >> num >> smod ;
  long long int mod = toDeci(smod , b) ;

  long long int ans = 0 ;

  for(int i = num.size()-1 , cnt = 0; i >= 0 ; i-- , cnt++){
    long long int a = num[i] - '0' , bm= BigMod(b,cnt,mod);
    a = (a * bm ) % mod ;
    ans = (ans + a)  % mod ;
  }
  print_ans(ans, b) ;
}
int main(){
  
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  long long int base ;
  while(cin >> base && base){
    solve(base) ;
  }

  return 0;
}
