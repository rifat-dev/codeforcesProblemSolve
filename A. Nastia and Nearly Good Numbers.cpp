#include<bits/stdc++.h>
using namespace std;

#define ll long long

void saive(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);


     ll a,b;
     cin >> a >> b;


     if(b==1){
        cout << "NO" << '\n';
     }else{
         cout << "YES" << '\n';
         cout << a << " " << a*b << " " << a*(b+1) << '\n';
     }


}

int main(){

    int t;
    cin >> t;

    while(t--){
        saive();
    }

}
