#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){

  ll n;
  cin >> n;


  long long val=1;
  for(long long i=0;i<=60;i++){
    if(val>n){
      cout << i-1 << '\n';
      break;
    }
    val*=2;
  }
}
