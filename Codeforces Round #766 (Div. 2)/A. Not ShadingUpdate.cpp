#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while(t--)
    {
        int n,m,r,c;
        int ans1 = -1;
        int ans2 = -1;
        cin >> n >> m >> r >> c;

        char ch[n+1][m+1];

        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=m; j++)
            {
                cin >> ch[i][j];
                if(ch[i][j] == 'B')
                {
                    if(i==r || j==c)
                        ans1 = 1;

                    else
                        ans2 = 2;
                }
            }
        }

        if(ch[r][c] == 'B')
            cout << 0 << endl;

        else if(ans1 == 1)
            cout << 1 << endl;

        else if(ans2 == 2)
            cout <<  2 << endl;
        else
            cout << -1 << endl;
    }

}
