#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n , m;
    vector<int> arr;

    cin >> n >> m;

    for(int i=1; i<=m; i++){
        int a;
        cin >> a;
        arr.push_back(a);
    }

    sort(arr.begin(), arr.end());

    int minValue = arr[n-1]-arr[0];
    for(int i=0; i<=m-n; i++){
       if(arr[n-1+i]-arr[i]<minValue){
        minValue = arr[n-1+i]-arr[i];
       }
    }

    cout << minValue <<endl;

}
