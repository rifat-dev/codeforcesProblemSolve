#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){

    ll s,n;
    cin >> s >> n;

    ll ans = 0;

    for(ll i=0; i<=s; i++){
        for(ll j=0; j<=s; j++){
            for(ll k=0; k<=s; k++){
                if(i+j+k <=s && i*j*k <=n){
                    ans++;
                }
            }
        }
    }

    cout << ans << endl;


}
