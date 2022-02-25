#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


void solve(){

    ll a,b;

    cin >> a >> b;

    ll d = max(a,b) - min(a,b);
    ll n = max(a,b)/2;



    if(d>=n){
        cout << max(a,b)% (n+1) << endl;
    }else{

      cout << max(a,b) % min(a,b) << endl;
    }

}


int main(){

  int t;
  cin >> t;

  while(t--) solve();

}
