#include<bits/stdc++.h>
using namespace std;
#define ll long long

void saive(){
     ll n;
     cin >> n;

     if(n%3 == 0){
        cout << n/3 << " " << n/3 << '\n';
     }else{

         ll k = n/3;

         if(k + (k+1)*2 == n){
           cout << k << " " << k+1 << '\n';
         }else{
             cout << k+1 << " " << k << '\n';
         }
     }

}

int main()
{

    int t;
    cin >> t;

    while(t--) saive();

}
