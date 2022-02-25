#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll mod = 1e9+7;
ll ans = 0;

ll fa(ll n){

   ll fact = 1;
   for(int i=3; i<=n; i++){
      fact = ((fact%mod)*(i%mod))%mod;
   }

   return fact;

}

int main(){

    int t;
    cin >> t;

    while(t--){
      ll n;
      cin >> n;

      ll ans = fa(n*2);
      cout << ans << endl;
    }

}
