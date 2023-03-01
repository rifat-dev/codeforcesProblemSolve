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

        sort(a.begin() , a.end());

        if(n == 1){
            if(a[0] != 1){
                cout << "No" << "\n";
            }else{
                cout << "Yes" << "\n";
            }
        }else if((a[n-1] - a[n-2]) <= 1 ){
            cout << "Yes" << "\n";
        }else{
          cout << "No" << "\n";
        }
    }


}
