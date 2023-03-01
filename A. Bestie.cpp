
#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll calculatGCD(vector<ll>& arr)
{
    ll res = 0;
    for(int i=0; i<arr.size(); i++)
    {
        res = __gcd(res,arr[i]);
    }

    return res;
}

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

        ll gcd = calculatGCD(arr);
        if(gcd == 1)
        {
            cout << 0 << endl;
        }
        else if(__gcd(gcd,n) == 1)
        {

            cout << 1 << endl;

        }
        else if(__gcd(gcd,n-1) == 1)
        {

            cout << 2 << endl;

        }
        else
        {
            cout << 3 << endl;
        }
    }



}
