#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){

    int t;
    cin >> t;

    while(t--){
        ll n;
        cin >>n;

        vector<ll> arr(n);

         ll sum = 0;
        for(int i=0; i<n; i++){
            cin >> arr[i];
            sum += arr[i];
        }

        if(sum<n){
            cout << (n-sum)*sum << endl;
        }else{

           ll k = (sum % n);
           cout << (n-k)*k << endl;

        }
    }


}
