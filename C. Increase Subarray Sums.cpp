#include <bits/stdc++.h>
using namespace std;
using ll = long long;



int main()
{

    ll t;
    cin >> t;

    while(t--)
    {
        ll n, x;
        cin >> n >> x;

        vector<ll> arr(n);
        for(int i=0; i<n; i++) cin >> arr[i];
        vector<ll> p(n+1);
        vector<ll> ans(n+1);
        p[0] = 0;

        for(int i=0; i<n; i++)
        {
            if(i==0)
            {
                p[i+1] = arr[i];
            }
            else
            {
                p[i+1] = arr[i]+p[i];
            }
        }

        for(int i=0; i<n; i++)
        {
            ll mx = INT_MIN;
            for(int j=0; j<n-i; j++)
            {
                mx = max(mx, p[j+i+1]-p[j]);

            }
            ans[i] = mx;
//            cout << i << " " << mx << endl;
        }

        for(int k=0; k<=n; k++){
            ll mx = 0;
            for(int j=0; j<n; j++){
                mx = max(mx , ans[j]+min(k,j+1)*x);
            }
            cout << mx << " ";
        }

        cout << endl;

    }


    return 0;
}
