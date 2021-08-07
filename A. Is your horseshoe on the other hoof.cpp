#include<bits/stdc++.h>
using namespace std;

int main(){
   int a1,a2,a3,a4;
   int total = 0;
   cin >> a1 >> a2 >> a3 >>a4;

   if(a1==a2 || a1 ==a2 || a1==a3 || a1==a4 ){
       total++;
   }
   if(a2==a3 || a2==a4){
       total++;
   }
   if(a3==a4){
       total++;
   }

   cout << total;

}
