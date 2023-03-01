#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n,m;
    cin >> n >> m;

    vector<ll> arr(n+m,0);
    for(int i=0; i<n+m; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());
    reverse(arr.begin(), arr.end());


    ll sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }

    cout << sum << endl;

}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}
