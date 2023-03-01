#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{

    ll t;
    cin >> t;

    while(t--)
    {
        ll n, s;
        cin >> n >> s;

        ll v = pow(n,2);
        cout << (s/v) << endl;
    }


}
