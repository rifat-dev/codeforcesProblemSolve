#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{

    ll n, m;

    cin >> n >> m;

    n = 2*n - 1;
    string s[n+2];

    for(ll i=0; i< n; i++)
        cin >> s[i];

    string ans = "";
    for(ll i=0; i<m; i++)
    {
        map<char, int > ss;
        for( ll j=0; j<n; j++)
        {
           ss[s[j][i]]++;
        }

        for(auto c : ss){
            if(c.second % 2 == 1){
                ans += c.first;
                break;
            }
        }
    }

    cout << ans << endl;

}

int main()
{

    int t;
    cin >> t;

    while(t--)
        solve();

}
