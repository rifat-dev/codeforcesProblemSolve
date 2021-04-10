#include <bits/stdc++.h>
using namespace std;

int main(){
    int currentPos = 0;
   string str = "hello";
   string s;
   cin >>s;

   for(int i=0; i<s.size(); i++){
       if(s[i] == str[currentPos]){
          currentPos++;
          if(currentPos == 5){
            break;
          }
       }
   }

   if(currentPos == 5){
     cout << "YES" << endl;

   }else{
     cout << "NO" << endl;
   }

}
