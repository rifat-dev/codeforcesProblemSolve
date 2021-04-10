#include <bits/stdc++.h>

#include <vector>
using namespace std;

void saive()
{
    int A, B, n;

    cin >> A >> B >> n;
    int64_t dam = 0;
    vector<pair<int, int>> m(n);
    //attack , health
    for (int i = 0; i < n; i++)
    {
        cin >> m[i].first;
        // monsAttackPower
    }
    for (int i = 0; i < n; i++)
    {
        cin >> m[i].second;
        // HealthPower
    }

    // sort attackPower
    sort(m.begin(), m.end());

    for (int i=0; i<n; i++)
        dam+=int64_t(m[i].second+A-1)/A*m[i].first;

    for(int i=0; i<n; i++)
        if(B-(dam-m[i].first)>0)
        {
            puts("YES");
            return;
        }
    puts("NO");
}

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
        saive();

    return 0;
}
