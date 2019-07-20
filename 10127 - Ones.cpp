#include<bits/stdc++.h>
using namespace std;

void solve(int n){
	
	int mod = 1%n;
	for(int i = 1 ;  ; i++){
		
		mod = ((mod % n * 10%n)%n + 1%n)%n;
		if(mod == 0){
			printf("%d\n",i+1);
			break ;
		}
		
	}
	
}

int main(){
	
	int n; 
	while(scanf("%d",&n)==1)
		solve(n);
	return 0;
}
