#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll ;

int main()
{
    ll n, q;
    cin >> n >> q;
    vector<ll> arr;
    map<int,int> newArr;
    ll sum = 0;
    for(int i=0; i<n; i++)
    {
        ll a;
        cin >> a;
        arr.push_back(a);
        sum += arr[i];
        newArr[i] = a;
    };

    ll value = 0;
    while(q--)
    {
        ll t;
        cin >> t;
        if(t==1)
        {
            ll a,x;
            cin >> a >> x;
            sum -= (newArr[a-1] == 0 ? value : newArr[a-1]);
            sum += x;
            newArr[a-1] = x;
            cout << sum << endl;
        }
        else
        {
            ll x;
            cin >> x;
            value = x;
            sum = x*n;
            newArr.clear();
            cout << sum << endl;
        }
    }
}
