#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{

    ll n,x, t;
    cin >> n >> x >> t;

    if(x>t)
        cout << 0 << endl;

    else if(x==t)
        cout << n-1 << endl;
    else
    {
        ll a = t/x;
        if(a>=n)
            cout << n*(n-1)/2 << endl;
        else
        {
            ll ans = 0;
            ll z = n-a;
            ans += a*z;
            ans += a*(a-1)/2;
            cout << ans << endl;
        }

    }

}


int main()
{

    int t;
    cin >> t;

    while(t--)
        solve();


}
