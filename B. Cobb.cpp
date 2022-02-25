#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{

    int t;
    cin >> t;

    while(t--)
    {
       ll n , k;
       cin >> n >> k;

       vector<ll> arr(n+1);

       for(int i=1; i<=n; i++){
         cin >> arr[i];
       }

       ll ans = INT_MIN;

       for(ll i=n; i>=1 ; i--){
            int count = 0;
          for(ll j=i-1; j>=1 ; j--){
             ll v = i*j - k * (arr[i]|arr[j]);
             ans = max(v , ans);
             count++;
             if(count > 100){
                break;
             }
          }
       }

       cout << ans << endl;
    }


}
