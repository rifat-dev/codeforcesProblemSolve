#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> a(n);
        for(int i=0; i<n; i++) cin >> a[i];

        vector<int> b;


        for(int i=0; i<n; i++){
            if(i != a[i]){
              b.push_back(a[i]);
            }
        }

        int ans = 0;
        ans = b[0]&b[1];
        for(auto i : b){
            ans = ans&i;
        }

        cout << ans << endl;
    }


}
