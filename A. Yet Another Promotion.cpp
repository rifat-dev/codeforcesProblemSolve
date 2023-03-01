#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{

    int t;
    cin >> t;

    while(t--)
    {
        ll a,b,n,m;
        cin >> a >> b;
        cin >> n >> m;

        ll q = n/(m+1);
        ll r = n - q * (m+1);

        ll ans = q * min(a*m, b*(m+1)) + r*min(a,b);
        cout << ans << endl;
    }


}
