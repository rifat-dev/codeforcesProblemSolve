#include<bits/stdc++.h>
using namespace std;

bool isTrue(int a){
    if(a%2 == 0) return true;
    else return false;
}

void solve()
{
    int n;
    cin >> n;

    int ans = 0;
    vector<int> arr(n,0);
    for(int i=0; i<n; i++){
        cin >> arr[i];
        if(i!=0){
            if(isTrue(arr[i]) == isTrue(arr[i-1])){
                ans++;
            }
        }
    }

    cout << ans << endl;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--)
    {
        solve();

    }
}
