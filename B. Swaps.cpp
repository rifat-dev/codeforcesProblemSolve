#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll n;
    cin >> n;

    vector<ll> a(n);
    vector<ll> b(n);
    map<ll, ll> aIndex;
    map<ll, ll> bIndex;

    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        aIndex[a[i]] = i;
    }


    for(int i=0; i<n; i++)
    {
        cin >> b[i];
        bIndex[b[i]] = i;
    }

    if(a[0]<b[0])
        cout << 0 << endl;

    else
    {
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        vector<ll> mn(n);
        mn[n-1] = bIndex[b[n-1]];
        for(ll i=n-2; i>=0; i--){
            mn[i] = min(mn[i+1],bIndex[b[i]]);
        }

        ll ans = INT_MAX;

        for(int i=0; i<n; i++){
            ll s = aIndex[a[i]] +mn[i];
            ans = min(ans , s);
        }

        cout << ans << endl;

    }




}

int main()
{

    int t;
    cin >> t;
    while(t--)
        solve();

}
