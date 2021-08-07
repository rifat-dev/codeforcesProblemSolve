#include<bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    int x = 1999999973;
    int y = 1999999943;
    while(t--){
        int n;
        cin >>n ;

        int arr[n+1];

        for(int i=0; i<n; i++){
            cin >> arr[i];
        }

        cout << n-1 << '\n';
        for(int i =0; i<n-1; i++){
            if(i%2==0){
                cout << i+1 << " " << i+2 << " " << x << " " << min(arr[i],arr[i+1]) << '\n';
                arr[i+1] = min(arr[i], arr[i+1]);
            }else{
                cout << i+1 << " " << i+2 << " " << y << " " << min(arr[i],arr[i+1]) << '\n';
                arr[i+1] = min(arr[i], arr[i+1]);
            }
        }


    }


}
