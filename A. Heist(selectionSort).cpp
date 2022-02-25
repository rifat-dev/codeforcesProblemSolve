#include<bits/stdc++.h>
using namespace std;

void selectionsort(vector<int> &arr){
    int n = arr.size();

   for(int i=0; i<n-1; i++){
      int minvalue = arr[i];
      int index = i;

      for(int j=i+1; j<n; j++){
        if(minvalue > arr[j]){
            minvalue = arr[j];
            index = j;
        }
      }

      swap(arr[i], arr[index]);
   }

}


int main(){

    int n;
    cin >>n;

    vector<int> arr(n);
    for(int i=0; i<n; i++) cin >> arr[i];
    selectionsort(arr);

    for(int i=0; i<n; i++) cout << arr[i] << " ";


}
