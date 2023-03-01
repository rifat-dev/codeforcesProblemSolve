#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n;
vector<int> arr(n);

int main()
{

    int t;
    cin >> t;

    while(t--)
    {
        ll x;
        cin >> n >> x;
        map<ll,ll> mp;
        for(int i=0; i<n; i++)
        {
            ll a;
            cin >> a;
            mp[a]++;
        }

        ll ans = 0;
        for(auto it : mp)
        {
            ll i = it.second;
            while(i != 0)
            {
                ll v = it.first * x;
                if(mp[v] > 0)
                {
                    mp[v]--;;
                    mp[it.first]--;
                    ans +=2;
                }
                i--;
            }
        }

        cout << (n - ans) << endl;


    }


}
