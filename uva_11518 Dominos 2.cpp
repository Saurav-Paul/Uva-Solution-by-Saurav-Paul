#include<iostream>
#include<cstdio>
#include<vector>
#define SIZE 10009
using namespace std;

vector < int >vec[SIZE];
bool fall[SIZE];
int nfall;
void dfs(int node)
{
    if(!fall[node])
        nfall++;
    int i;
    fall[node]=true;
    for(i=0; i<vec[node].size(); i++)
    {
        int n=vec[node][i];
        if(!fall[n])
        {
            dfs(n);

        }

    }
}

int main()
{
    // freopen("output.txt","w",stdout);
    int node,edge,value,n1,n2,tcase,num;
    cin>>tcase;
    while (tcase--)
    {
        nfall=0;
        cin>>node>>edge>>num;
        for(value=0; value<node; value++)
        {
            fall[value]=false;
            vec[value].clear();
        }
        for(value=0; value<edge; value++)
        {
            cin>>n1>>n2;
            n1--;
            n2--;
            vec[n1].push_back(n2);
        }
        for(value=0; value<num; value++)
        {
            cin>>n1;
            n1--;
            dfs(n1);
        }
        cout<<nfall<<endl;
        nfall=0;
    }
    return 0;
}
