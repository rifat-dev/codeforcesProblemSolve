#include<bits/stdc++.h>

using namespace std;

const int M = 32768;

int findTow(int n){

    int res = 0;
    while(n%2 == 0){
        n /= 2;
        res++;
    }

    return res;
}

int main(){

    int n;
    cin >> n;

    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a[i];


    for(int i=0; i<n; i++){
        int u = a[i];

        if(u == 0){
            cout << 0 << " ";
            continue;
        }
        int ans = INT_MAX;
        for(int j=0; j<=15; j++){
           int v = findTow(u+j);
           int step = j+15-v;
           ans = min(ans , step);
        }
        cout << ans << " ";
    }
    cout << endl;

}
