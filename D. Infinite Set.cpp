#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll M = 1e9+7;
ll n, p;
ll v = 0;
vector<ll> arr(n);
set<ll> s;



int binExpo(ll a, ll b)
{
    ll ans = 1;
    while(b>0)
    {

        if(b&1)
        {
            ans = (ans*a) % M;
        }
        a = (a*a) % M;
        b >>= 1;
    }

    return ans;
}

void generateNum(ll num)
{
    if(num > v) return;
    if(num < v) s.insert(num);
    generateNum(2*num + 1);
    generateNum(4*num);
}



int main()
{
    cin >> n >> p;

    v = binExpo(2, p);

    for(int i=0; i<n; ++i) {
        ll a;
        cin >> a;
        arr.push_back(a);
    }

    for(int i=0; i<n; ++i){
        generateNum(arr[i]);
    };

    cout << s.size() << endl;

}
