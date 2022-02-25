#include<bits/stdc++.h>
using namespace std;

void solve()
{

    int n;
    cin >> n;

    vector<int> a(n+1);
    vector<int> b(n+1);

    multimap<int, int> ans;

    for(int i=1; i<=n; i++)
        cin >> a[i];
    for(int i=1; i<=n; i++)
        cin >> b[i];

    for(int i=1; i<=n-1; i++)
    {
        if(a[i]!=b[i])
        {
            if(a[i]>b[i])
            {
                for(int j = i+1; j<=n; j++)
                {
                    if(a[i]==b[i])
                        break;

                    else
                    {
                        if(a[j] < b[j])
                        {
                            while((a[i] != b[i]) && (a[j] != b[j]))
                            {
                                a[i]--;
                                a[j]++;
                                ans.insert(pair<int,int>(i,j));
                            }
                        }
                    }
                }
            }
            else
            {
                for(int j = i+1; j<=n; j++)
                {
                    if(a[i]==b[i])
                        break;

                    else
                    {

                        if(a[j] > b[j])
                        {
                            while((a[i] != b[i]) && (a[j] != b[j]))
                            {

                                a[i]++;
                                a[j]--;
                                ans.insert(pair<int,int>(j,i));
                            }
                        }
                    }
                }
            }
        }
    }

    int flag = 0;
    for(int i=1; i<=n; i++)
    {
//       cout << a[i] << " " << b[i] << endl;
        if(a[i]!=b[i])
            flag=1;
    }

    if(flag)
        cout << -1 << endl;

    else
    {
        cout << ans.size() << endl;

        for(auto i : ans)
            cout << i.first << " " << i.second << endl;
    }

}

int main()
{

    int t;
    cin >> t;

    while(t--)
        solve();


}
