#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>adj;
vector<int>indegree;

int main()
{
    int n,m;   //n=node m= edge
    cin>>n>>m;
    adj.resize(n, vector<int>());
    indegree.resize(n, 0);
    for(int i=0; i<m; i++)
    {
        int u,v;
        cin>> u>> v;
        adj[u].push_back(v);
        indegree[v]++;
    }
    queue<int>q;
    for(int i=0; i<n; i++)
    {
        if(indegree[i]==0)
            q.push(i);
    }
    vector<int>topSort;
    while(!q.empty())
    {
        int u=q.front(); q.pop();
        topSort.push_back(u);
        for(int i=0; i<adj[u].size(); i++)
        {
            int v = adj[u][i];
            indegree[v]--;
            if(indegree[v]==0)
            {
                q.push(v);
            }
        }
    }
    for(int i : topSort)
        cout<< i << " ";
    return 0;
}

