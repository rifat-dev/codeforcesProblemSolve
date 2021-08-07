#include<bits/stdc++.h>
using namespace std;


void saive()
{

    string s;
    cin >> s;

    map<char , int> m;

    for(int i=0; i< s.size(); i++){
        m[s[i]]++;
    }

    int semiler = 0;
    int deff = 0;

    for(auto i: m){
       if(i.second >= 2){
         semiler++;
       }else{
        deff++;
       }
    }

    cout << (deff/2)+semiler << '\n';

}


int main()
{

    int t;
    cin >> t;

    while(t--)
        saive();
}
