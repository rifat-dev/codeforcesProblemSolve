

#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        ll n;
        cin >> n;

        vector<ll> arr(n+1,0);
        for(int i=1; i<=n; i++)
        {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());

        cout << arr[n] - arr[1] << endl;
    }



}
