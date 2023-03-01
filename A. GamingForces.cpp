#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> arr(n,0);
    int cntOne = 0;
    int ans = 0;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
        if(arr[i] == 1)
        {
            cntOne++;
        }
    }

    ans += (cntOne/2);
    ans += (n - (cntOne/2)*2);

    cout << ans << endl;

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
