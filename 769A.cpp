#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin  >> t;

  while(t--){
    int n;
    cin >> n;
    string s;
    cin >> s;

    int zero = 0;
    int one = 0;

    for(int i=0; i<s.length(); i++){
        if(s[i] == '0') zero++;
        else one++;
    }


    if(s.length() == 1) cout << "YES" << endl;
    else if((zero == 1) && (one == 1)) cout << "YES" << endl;
    else cout << "NO" << endl;


  }
}
