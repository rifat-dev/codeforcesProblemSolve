#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

      ll n,m;
        cin >> n>> m;
        vector<ll> arr;

        for(ll j=0; j<n; j++){
            ll a;
            cin >> a;
            arr.push_back(a);
        }

        int sum = 1;
        for(ll j=0; j<n; j++){
            sum = (sum+arr[j])%m;
        }

        cout << sum;
//        if(sum%m==0){
//            cout << "YES" << '\n';
//        }else{
//            cout << "NO" << '\n';
//        }

}
