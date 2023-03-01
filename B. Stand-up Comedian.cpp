#include<bits/stdc++.h>
using namespace std;

void solve()
{

    int a,b,c,d;
    cin >> a >> b >> c >> d;

    if(a==0)
    {
        cout << 1 << endl;
    }
    else
    {
        int ans = a + min(b,c)*2 + min(a+1, (abs(b-c)+d));
        cout << ans << endl;
    }

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--)
    {
        solve();
    }
}
