#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{

    ll W,H,x1,x2,y1,y2,w,h;
    cin>> W >> H;
    cin>> x1 >> y1 >> x2 >> y2;
    cin >> w >> h;

    ll tH = y2-y1;
    ll tW = x2-x1;

    ll ansH = INT_MAX;
    ll ansW = INT_MAX;

    if(h+tH<=H || w+tW<=W)
    {
        if(h+tH<=H)
        {
            ansH = min(h-(H-y2), h-y1);
            if(ansH<0)
                ansH = 0;
        }

        if(w+tW<=W)
        {
            ansW = min(w-(W-x2), w-x1);
            if(ansW<0)
                ansW = 0;
        }

    }
    else
        ansH = -1;


    long long ans = min(ansW , ansH);
    cout << ans << endl;

}

int main()
{

    int t;
    cin >> t;
    while(t--)
        solve();


}
