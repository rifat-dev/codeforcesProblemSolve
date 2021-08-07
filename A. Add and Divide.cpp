#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >>t;


    while(t--)
    {
        ll a,b, ans = 1e18, coun;

        cin >> a >> b;

        for(int i=0; i*i<=a; i++)
        {
            if(b==1 and i==0)
                continue;
            coun=i;
            ll c = a;
            while(c){
                 c/=(b+i);
                coun++;
            }
            ans = min(ans,coun);
        }
        cout << ans << '\n';
    }

}
