#include<bits/stdc++.h>
using namespace std;

int main(){
    string str = "codeforces";

    int t;
    cin >> t;

    while(t--){
        char c;
        cin >> c;

        bool flag = false;
        for(int i=0; i<str.size(); i++){
            if(str[i] == c){
                flag = true;
                break;
            }
        }

        cout << (flag == true ? "YES" : "NO") << endl;



    }

}
