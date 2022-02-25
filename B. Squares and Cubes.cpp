#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while(t--)
    {
        long long int n;
        cin >> n;

        set<int> seT;
        for (int i = 1; i * i <= n; i++)
            seT.insert(i * i);
        for (int i = 1; i * i * i <= n; i++)
            seT.insert(i * i * i);

        cout << seT.size() << endl;

    }


}
