#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        string str;
        cin >> n;
        cin >> str;

        if(str.size() == 1){
            cout << 1 << endl;
            continue;
        }

        bool flag = false;
        for(int i=0; i<n; i++){
            if(str[i] == str[n-i-1]){
                cout << (n-i-1) - i + 1 << endl;
                flag = true;
                break;
            }
        }

        if(!flag){
            cout << 0 << endl;
        }
    }
}
