#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

int adj_mat[1000][1000];
int dist[1000];
bool visited[1000];

void graph_new(int n)
{
    for (int i = 0; i < n; i++) 
    {
        dist[i] = -1;
        visited[i] = false;
        for (int j = 0; j < n; j++) 
        {
            adj_mat[i][j] = 0;
        }
    }
}

void graph_edge(int u, int v)
{
    adj_mat[u][v] = 1;
    adj_mat[v][u] = 1;
}

void graph_bfs(int s, int n)
{   
    queue<int> q;
    visited[s] = true;
    dist[s] = 0;
    q.push(s);

    while (!q.empty()) 
    {
        s = q.front();
        q.pop();

        for (int i = 0; i < n; i++) 
        {
            if (adj_mat[s][i] == 1 && !visited[i]) 
            {
                visited[i] = true;
                dist[i] = dist[s] + 6;
                q.push(i);
            }
        }
    }
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int q;
    cin>>q;
    
    while (q--) 
    {
        int n, m;
        cin>>n>>m;

        graph_new(n);
        for (int i = 0; i < m; i++) 
        {
            int u, v;
            cin>>u>>v;
            graph_edge(u-1,v-1);
        }
        int s;
        cin>>s;

        graph_bfs(s-1,n);

        for (int i = 0; i < n; i++) 
        {
            if (!dist[i]) 
                continue;
            cout<<dist[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
