#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> arr;

    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        arr.push_back(a);
    }

    int odd = 0;
    int oddIndex=0;
    int even = 0;
    int evenIndex = 0;

    for(int i=0; i<n; i++){
        if(arr[i]%2 == 0){
            even++;
            evenIndex = i+1;
        }else{
           odd++;
           oddIndex = i+1;
        }
    }

    if(odd == 1){
        cout << oddIndex ;
    }else{
      cout << evenIndex;
    }

}
