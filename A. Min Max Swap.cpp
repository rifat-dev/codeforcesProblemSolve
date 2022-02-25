#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;

        vector<int> a(n);
        vector<int> b(n);

        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        for(int i=0; i<n; i++){
            cin >> b[i];
        }

        for(int i=0; i<n; i++){
            if(a[i]<b[i]){
                swap(a[i], b[i]);
            }
        }

        int maxA = 0;
        int maxB = 0;

        for(int i=0; i<n; i++){
            maxA = max(maxA , a[i]);
            maxB = max(maxB , b[i]);
        }

        cout << maxA*maxB << endl;
    }
}
