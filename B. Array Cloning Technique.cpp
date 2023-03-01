#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        map<int , int> arr;
        for(int i=0; i<n; i++){
            int a;
            cin >> a;
            arr[a]++;
        }

        int res = -1;
        for(auto it : arr){
            if(it.second > res){
                res = it.second;
            }
        }



        if(n == 1 || n == res){
            cout << 0 << endl;
        }else{

            int ans = 0;
            while(n-res > 0){
                if(n-res>=res){
                    ans = ans+res+1;
                    res += res;
                }else{
                   ans = ans + (n-res) + 1;
                   res += n-res;
                }
            }

            cout << ans << endl;
        }
    }

}
