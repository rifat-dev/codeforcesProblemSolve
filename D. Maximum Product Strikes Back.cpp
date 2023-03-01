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

        int maxV = 0;
        int left = 0, right = 0;
        for(int i=0; i<n; i++){
          int m = a[i];
          for(int j=i+1; j<n; j++){
             if(m*a[j] > maxV){
                maxV = m*a[j];
                m = m*a[j];
                left=i;
                right=j;
             }else{
                m = m*a[j];
             }
          }
        }

        cout << left << " " << n-1-right << endl;
    }

}
