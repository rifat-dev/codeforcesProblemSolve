#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> arr;
        for(int i=n; i>0; i--){
            arr.push_back(i);
        }

        vector<vector<int>> results;
        results.push_back(arr);
        for(int i=arr.size()-1; i>0; i--){
            swap(arr[i], arr[i-1]);
            results.push_back(arr);
        }

        for(auto res  : results){
            for(auto r : res){
                cout << r << " ";
            }
            cout << endl;
        }


    }

}
