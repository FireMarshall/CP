#include <bits/stdc++.h>
using namespace std;

int a[100010], t, n = 0,u, v;
int visited[100010];
long long x;
vector<int> edges[100010];

void init(){
    memset(a, 0, sizeof(a));
    memset(visited, 0, sizeof(visited));
    for(int i = 0; i < n; ++i) edges[i].clear();
}


long long zapper(int z){
    long long zz = 0;
    visited[z] = 1;
    for(int i = 0; i < edges[z].size(); ++i){
        if(visited[edges[z][i]] == 0){
            zz += zapper(edges[z][i]);
        }
    }
    return max(x, (a[z] + zz));
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    cin >> t;
    while(t--){
        init();
        cin >> n >> x;
        x = (-1)*x;
        for(int i = 0; i < n; ++i){
            cin >> a[i];
        }
        for(int i = 1; i < n; ++i){
            cin >> u >> v;
            --v, --u;
            edges[v].push_back(u);
            edges[u].push_back(v);
        }
        cout << zapper(0) << '\n';
    }
	return 0;
}

