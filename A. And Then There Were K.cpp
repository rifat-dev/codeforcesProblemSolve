#include<bits/stdc++.h>
using namespace std;


void saive(){

    int n;
    cin >> n;


    int leng = sqrt(n) +2;
    for(int i=0; i<=leng; i++){
        int res = pow(2,i);
        if(n<res){
            int ans = pow(2,i-1) - 1;
           cout << ans  << '\n';
           break;
        }
    }

}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        saive();
    }
}
