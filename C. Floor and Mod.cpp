#include<bits/stdc++.h>

#define ll long long
using namespace std;


void solve()
{

    ll x, y;
    cin >> x>> y;

    ll totalPair = 0;
    for(ll b=1; b*b < x; b++)
    {
          totalPair +=  max(0LL,min(y,(x/b)-1)-b);
    }

    cout << totalPair << endl;

}

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;

    cin >> t;

    while(t--)
        solve();

}
