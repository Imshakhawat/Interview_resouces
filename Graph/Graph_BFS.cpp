#include<bits/stdc++.h>
using namespace std;

vector<int> graph[100];
int dis[100] = {0};
bool vis[100];

void  bfs(int first)
{
    //if(first==last) return 1;
    queue<int>q;

    q.push(first);
    
    vis[first] = 1;
    dis[first] = 0;

    while (!q.empty())
    {
        int temp = q.front();
        q.pop();

        for (auto it : graph[temp])
        {
            if (vis[it]) continue;
            vis[it] = 1;
            dis[it] = dis[temp] + 1;
            q.push(it);
        }
    }
    

}




int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int node, edge;

    

    cin >> node >> edge;
// graph image link: https://www.tutorialspoint.com/assets/questions/media/20723/adjacency_list.jpg
    for (int i = 0; i < edge; ++i)
    {
        int u, v;
        cin >> u >> v;

        graph[u].push_back(v);
        graph[v].push_back(u);
    }



    bfs(0);

    for (int i = 0; i < 6; ++i)
    {
        cout<<i<<" "<<dis[i]<<endl;
    }

//input
// 6 9
// 1 2
// 1 5
// 1 4
// 2 5
// 2 3
// 3 5
// 3 0
// 4 5
// 4 0






}
