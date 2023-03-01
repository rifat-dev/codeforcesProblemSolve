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

        vector<ll> arr(n,0);
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());

        if(arr[0] == arr[n - 1])
        {
            cout << n*(n-1) << endl;
            continue;
        }

        int mn = 0, mx = n - 1;

        while(arr[0] == arr[mn])
            ++mn;

        while(arr[n - 1] == arr[mx])
            --mx;

        long long l = mn;
        long long r = n - mx - 1;

        cout << l*r*2 << endl;
    }


}

