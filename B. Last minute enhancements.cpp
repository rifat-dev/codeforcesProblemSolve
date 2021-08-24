#include<bits/stdc++.h>
using namespace std;

void solve(){

    int n;
    cin >> n;

    vector<long long> arr(n);



    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int k = arr[0];

    for(int i=1; i<n; i++){
        if(arr[i]<= k)
            arr[i]++;
        k = arr[i];

    }

    set<int> ans;
    for(int i=0; i<n; i++){
        ans.insert(arr[i]);
    }

    cout << ans.size() << endl;

}

int main(){

    int t;
    cin >> t;

    while(t--) solve();

}
