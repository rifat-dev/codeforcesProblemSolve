#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> arr(n);
        for(int i=0; i<n; ++i) cin >> arr[i];

        sort(arr.begin(), arr.end());

        int dt = 1;
        for(int i=0; i<n-1; ++i){
            if(arr[i] != arr[i+1]){
                dt++;
            }
        }

        for(int i=1; i<=n; i++){
            if(i <= dt){
                cout << dt << " ";
            }else{
                dt++;
                cout << dt << " ";
            }
        }
    }

}
