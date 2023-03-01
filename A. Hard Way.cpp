#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while(t--)
    {
        int x1,x2,x3,y1,y2,y3;
        cin >> x1 >> y1;
        cin >> x2 >> y2;
        cin >> x3 >> y3;

        int ans = 0;

        if(y1 == y2 && y2 == y3)
        {
            if(y1 != 0)
            {
                ans += abs(x1 - x2);
                ans += abs(x2 - x3);
            }
        }
        else if(y1 == y2)
        {
            if(y1 != 0 && y1 > y3) ans = abs(x1 - x2);
        }
        else if(y1 == y3)
        {
            if(y1 != 0 && y1 > y2 )  ans = abs(x1 - x3);
        }
        else if(y2 == y3)
        {
            if(y2 != 0 && y2 > y1)ans = abs(x2 - x3);
        }

        cout << ans << endl;


    }


}
