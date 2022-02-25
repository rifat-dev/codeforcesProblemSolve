#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;

    vector<ll> arr(n+1);

    for(int i=1; i<=n; i++)
        cin >> arr[i];

    ll sum = 0;

    for(ll i = n; i>1; i--)
    {
      ll k = (i+i-1)%arr[i];
      k++;
      for(ll j=i-k; j>=1; j-=arr[i]){
        if(j+i == arr[j]*arr[i]){
            sum++;
        }
      }
    }

    cout << sum << endl;

}

int main()
{

    int t;
    cin >> t ;

    while(t--)
        solve();

}



