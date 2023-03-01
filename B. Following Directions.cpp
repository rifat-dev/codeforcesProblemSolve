
#include<bits/stdc++.h>
using namespace std;

int main(){
    string str = "codeforces";

    int t;
    cin >> t;

    while(t--){
        int n;
        string str;
        int LR = 0;
        int UD = 0;
        bool flag = false;

        cin >> n;
        cin >> str;
        for(int i=0; i<str.size(); i++){
            if(str[i] == 'L'){
                LR--;
            }
            if(str[i] == 'R'){
                LR++;
            }
            if(str[i] == 'U'){
                UD++;
            }
            if(str[i] == 'D'){
                UD--;
            }

            if(LR == 1 && UD == 1){
                flag = true;
                break;
            }
        }

        cout << (flag == true ? "YES" : "NO") << endl;



    }

}
