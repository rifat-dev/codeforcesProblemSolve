#include<bits/stdc++.h>
using namespace std;

void insertionsort(vector<long long> &arr){

    int ln = arr.size();

    for(int i=1; i<ln; i++){
       int x  = arr[i];
       int j = i-1;

       while(j>=0 && arr[j]>x){
          arr[j+1] = arr[j];
          j--;
       }

       arr[j+1] = x;
    }

}

int main(){

    int n;
    cin >> n;

    vector<long long> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    insertionsort(arr);

    long long ans = 0;

    for(int i=0; i<n-1; i++){
         ans += arr[i+1] - arr[i];
         ans--;
    }

    cout << ans << endl;




}
