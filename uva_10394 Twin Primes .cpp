#include<iostream>
#include<math.h>
#include<vector>
#include<cstdio>
using namespace std;
vector <int> prime;
bool mark[20000009];
void sieve(int n);
int main(){
sieve(20000009);
 vector <int> twinPrime;

    for ( size_t i = 1; i < prime.size (); i++ ) {
        if ( prime [i] - prime [i - 1] == 2 )
            twinPrime.push_back (prime [i - 1]);
    }

    int s;

    while ( scanf ("%d", &s) != EOF ) {
        printf ("(%d, %d)\n", twinPrime [s - 1], twinPrime [s - 1] + 2);
    }

    return 0;

}
void sieve(int n){
int i,j,limit=sqrt(n*1.)+2;
mark[0]=1;
for(int i=4;i<=n;i+=2)
   mark[i]=1;
prime.push_back(2);
for(i=3;i<=n;i+=2){
    if(mark[i]==false){
        prime.push_back(i);
        if(i<=limit){
         for(int j=i*i;j<=n;j+=i*2)
                mark[j]=true;
        }
    }
}
}
