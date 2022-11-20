#include <bits/stdc++.h>
using namespace std;
int n, e; //nodes, edges
vector<vector<pair<int, int> > > adj; //first is adjecent node, second is edge cost
struct node {
	int x, cst;
	node(int x, int cst) :
			x(x), cst(cst) {
	}
	bool operator<(const node &a) const {
		return a.cst < cst;
	}
};
int dijk(int src, int des) {
	vector<int> cost(n + 1, 1e9);
	priority_queue<node> que;
	que.push(node(src, 0));
	cost[src] = 0;
	while (que.size()) {
		int x = que.top().x, cst = que.top().cst;
		que.pop();
		if (x == des) {
			return cst;
		}
		for (int i = 0, ln = adj[x].size(); i < ln; ++i) {
			int y = adj[x][i].first, _cst = adj[x][i].second;
			if (cst + _cst < cost[y]) {
				cost[y] = cst + _cst;
				que.push(node(y, cost[y]));
			}
		}
	}
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("a.in", "r", stdin);
#endif
	int q;
	cin >> n >> e >> q; // qeuery
	adj.clear();
	adj.resize(n + 1);
	while (e--) {
		int x, y, z; //pair of nodes, cost
		cin >> x >> y >> z;
		adj[x].push_back(make_pair(y, z));
	}
	while (q--) {
		int src, des;
		cin >> src >> des;
		cout << dijk(src, des) << endl;
	}
	return 0;
}
