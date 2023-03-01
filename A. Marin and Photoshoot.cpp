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

        int ans = 0;
        for(int i=0; i<s.size()-1; ++i){
            if(s[i] == '0' && s[i+1]== '0'){
                ans += 2;
            }else if(s[i] == '0' && s[i+1] == '1'){
                if(i<= s.size()-2 && s[i+2] == '0'){
                    ans+=1;
                }
            }
        }

        cout << ans << endl;
    }

}
