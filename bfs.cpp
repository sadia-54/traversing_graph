#include<bits/stdc++.h>
using namespace std;
#define n 1000

vector<int> adj[n];
queue<int> q;
//         0
//        /  \
//       1     2
//     /   \  /  \
//    3    4  5   6

bool vis[n];

void bfs(int source)
{
    vis[source]=1;
    q.push(source);
    while(!q.empty())
    {
        int node = q.front();
        q.pop();
    cout<< node<< " ";
    for(int i=0; i<adj[node].size(); i++)
    {
        int k = adj[node][i];
        if(!vis[k])
        {
            vis[k]=1;
            q.push(k);
        }
    }
  }
}


int main()
{
    adj[0].push_back(1);
    adj[0].push_back(2);
    adj[1].push_back(3);
    adj[1].push_back(4);
    adj[2].push_back(5);
    adj[2].push_back(6);

    bfs(0);
}

