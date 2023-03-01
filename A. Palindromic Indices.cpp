#include<bits/stdc++.h>
using namespace std;


int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;

        int x = n/2;
        int ans = 0;

        if(n&1) ans++;

        for(int i=n/2-1; i>=0; i--){
            if(s[x] == s[i]){
                ans+=2;
            }else break;
        }

        cout << ans << endl;



    }
}
