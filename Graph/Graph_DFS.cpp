#include<bits/stdc++.h>
using namespace std;

vector<int> graph[100];
bool vis[100];

void dfs(int first)
{

    vis[first] = 1;
    cout<<first<<" ";

    for (auto it : graph[first])
    {
        if (!vis[it]) {

            
            dfs(it);
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

    vector<vector<int>> list;

    cin >> node >> edge;
// graph image link: https://www.tutorialspoint.com/assets/questions/media/20723/adjacency_list.jpg
    for (int i = 0; i < edge; ++i)
    {
        int u, v;
        cin >> u >> v;

        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    dfs(0);
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
