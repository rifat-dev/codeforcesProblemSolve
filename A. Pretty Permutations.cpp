#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;

    vector<int> arr(n+1);

    for(int i=1; i<=n; i++){
        arr[i] = i;
    }

    for(int i=1; i<n; i+=2){
        swap(arr[i], arr[i+1]);
    }

    if(n%2 != 0){
        swap(arr[n], arr[n-1]);
    }

    for(int i=1; i<=n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}


int main(){

    int t;
    cin >> t;

    while(t--) solve();


}
