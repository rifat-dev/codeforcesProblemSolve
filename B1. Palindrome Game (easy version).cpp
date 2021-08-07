#include<bits/stdc++.h>
using namespace std;

void saive(){

    int n;
    cin >> n;

    string s;
    cin >> s;

    int zero = 0;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='0'){
            zero++;
        }
    }

    if(zero==1){
        cout << "BOB" << '\n';
    }else if(zero%2 == 0){
        cout << "BOB" << '\n';
    }else{
        cout << "ALICE" << '\n';
    }

}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        saive();
    }

}
