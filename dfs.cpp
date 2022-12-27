#include<bits/stdc++.h>
using namespace std;
#define n 1000

vector<int> edges[n];
//         0
//        /  \
//       1     2
//     /   \  /  \
//    3    4  5   6

bool visited[n];

void dfs(int node)
{
    cout<< node<< " ";
    for(int i=0; i<edges[node].size(); i++) // if(auto it: edges[node])   // if(!visited[it])  dfs(it);
    {
        if(!visited[edges[node][i]])
        {
            dfs(edges[node][i]);
        }
    }
}


int main()
{
    edges[0].push_back(1);
    edges[0].push_back(2);
    edges[1].push_back(3);
    edges[1].push_back(4);
    edges[2].push_back(5);
    edges[2].push_back(6);

    dfs(0);
}
