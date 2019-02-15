#include <bits/stdc++.h>
using namespace std;
int main(){
        int n,d,r;
        std::vector<int> morning;
        std::vector<int> evening;
        while(cin>>n>>d>>r) {
                if(!n && !d && !r)
                        break;
                for(int i=0; i<n; i++)
                {
                        int temp;
                        cin>>temp;
                        morning.push_back(temp);
                }
                for(int i=0; i<n; i++)
                {
                        int temp;
                        cin>>temp;
                        evening.push_back(temp);
                }
                sort(morning.begin(),morning.end());
                sort(evening.begin(),evening.end(),greater<int>());
                int total=0;
                for(int i=0;i<n;i++){
                    int temp=morning[i]+evening[i];
                    temp-=d;
                    if(temp>0)
                        total+=temp*r;


                }
                cout<<total<<endl;
                morning.clear();
                evening.clear();

        }

        return 0;
}
