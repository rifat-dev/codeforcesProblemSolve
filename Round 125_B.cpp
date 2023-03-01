#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin >> t;

    while(t--){
        long long int n,B,x,y;
        cin >> n >> B >> x >> y;
        vector<long long int> a;
        a.push_back(0);

        for(int i=1; i<=n; ++i){
            if(a[i-1]+x <= B){

            a.push_back(a[i-1]+x);

            }else{
                a.push_back(a[i-1]-y);
            }
        }

        long long int sum = 0;
        for(int i=0; i<a.size(); ++i){
            sum += a[i];
        }

        cout << sum << endl;
    }


}


