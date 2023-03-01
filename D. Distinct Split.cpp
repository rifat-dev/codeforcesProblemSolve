#include<bits/stdc++.h>
using namespace std;

int main(){
    string str = "codeforces";

    int t;
    cin >> t;

    while(t--){
        int a = 0;
        int b = 0;
        int n;
        string str;
        cin >> n;
        cin >> str;

        int arr[26];
        for(int i=0; i<26; i++){
            arr[i] = 0;
        }

        for(int i=0; i<str.size(); i++){
            arr[str[i]-'a']++;
        }

        for(int i=0; i<26; i++){
            if(arr[i] == 1){
                a++;
            }else if(arr[i] >= 2){
                a++;
                b++;
            }
        }

        cout << a+b << endl;




    }

}
