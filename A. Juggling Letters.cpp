#include<bits/stdc++.h>
using namespace std;

void saive(){
    int n;
    cin >> n;
    char ch[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int arr[27] = {};
    for(int i=0; i<n; i++){
      string s;
      cin >>s;

       for(int j=0; j<s.size(); j++){
          for(int k=0; k <sizeof(ch)/sizeof(ch[0]); k++){
            if(s[j] == ch[k]){
                 arr[k]++;
                break;
            }
          }

       }
    }

    int flag = 0;

    for(int j=0; j<sizeof(arr)/sizeof(arr[0]); j++){
        if(arr[j] !=0 && arr[j]%n != 0){
            flag = 1;
            break;
        }
    }

    if(flag){
        cout << "NO" << '\n';
    }else{
        cout << "YES" << '\n';
    }

}

int main(){

   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

   int t;
   cin >> t;

   for(int i=0; i<t; i++){
    saive();
   }
}
