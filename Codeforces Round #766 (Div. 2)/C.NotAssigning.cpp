#include<bits/stdc++.h>
using namespace std;


void solve()
{

    int n;
    cin >> n;
    vector<int> deg(n+1);
    vector<vector<int>> arr(n+1);
    map<pair<int,int>,int> edges;
    vector<int> vis(n+1);

    for(int i=1; i<n; i++)
    {
        int u,v;
        cin >> u >> v;
        arr[u].push_back(v);
        arr[v].push_back(u);

        deg[u]++;
        deg[v]++;

        pair<int, int> e = {u,v};
        edges[e] = i;
        swap(e.first, e.second);
        edges[e] = i;
    }

    for(int i=1; i<=n; i++){
        if(deg[i] > 2){
            cout << -1 << endl;
            return;
        }
    }

    int source;
    for(int i=1; i<=n; i++){
        if(deg[i] == 1){
            source = i;
            break;
        }
    }

    vector<int> ans(n-1);
    queue<int> q;
    q.push(source);
    vis[source] = 1;
    int w = 2;

    while(!q.empty()){
        int child = q.front();
        q.pop();
        for(auto c : arr[child]){
            if(vis[c] != 1){
                vis[c] = 1;
                q.push(c);

                pair<int,int> e = {child,c};
                int ind = edges[e];
                ans[ind-1] = w;

                w = (w == 2 ? 5 : 2);
            }
        }
    }

    for(auto x : ans) cout << x << " ";
    cout << endl;
}


int main()
{
    int t;
    cin >> t;

    while(t--)
        solve();
}
