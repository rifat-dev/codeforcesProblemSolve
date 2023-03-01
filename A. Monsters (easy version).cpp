#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        ll ans = 0;
        cin >> n;

        vector<ll> arr(n,0);
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());

        ll cnt = 1;
        for(int i=0; i<n; i++){
            if(arr[i]-cnt == 0){
                cnt += 1;
            }else if(arr[i]-cnt > 0){
                ans += (arr[i]-cnt);
                cnt += 1;
            }
        }

        cout << ans << endl;

    }

}
