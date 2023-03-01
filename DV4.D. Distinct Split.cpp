#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        string str;
        cin >> n >> str;

        map<char,int> m1;
        map<char,int> m2;

        for(int i=0; i<str.size(); i++){
            m1[str[i]]++;
        }

        int maxin = 0;
        for(int i=0; i<str.size(); i++){
            --m1[str[i]];
            ++m2[str[i]];
            if(m1[str[i]] == 0){
                m1.erase(str[i]);
            }
            int sum = m1.size()+ m2.size();
            maxin = max(maxin , sum);
        }

        cout << maxin << endl;
    }

}
