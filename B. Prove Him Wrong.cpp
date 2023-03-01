#include<bits/stdc++.h>
using namespace std;


int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> a(n);
        a[0] = 1;
        int flag = 0;

        for(int i=1; i<n; ++i){
            a[i] = a[i-1]*3;
            if(a[i] > 1e9){
                flag = 1;
                break;
            }
        }

        if(flag){
            cout << "NO" << endl;
        }else{
            cout << "YES" << endl;
            for(int i=0; i<n; ++i) cout << a[i] << " ";
            cout << endl;
        }

    }


}
