#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b , ans;
        cin >> a >> b;

       if(a==0){
          cout << 1 << endl;
       }else{
            ans = a + (b*2) + 1;

            cout << ans << endl;
        }
    }

}
