#include <bits/stdc++.h>
using namespace std;

int main(){
   int n;
   cin >>n;

   vector<int> N;
   int sum = 0;
   int i_take = 0;
   int min_coin = 0;
   for(int i=0; i<n; i++){
      int a;
      cin >>a;
      sum = sum+a;
      N.push_back(a);
   }

   sort(N.begin(),N.end());

   for(int j=n-1; j>=0; j--){
      i_take = i_take + N[j];
      sum = sum - N[j];
      min_coin++;
      if(i_take> sum){
        break;
      }
   }

   cout << min_coin << endl;
}
