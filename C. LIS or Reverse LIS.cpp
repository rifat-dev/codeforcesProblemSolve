#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        map<int,int> a;
        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            a[x]++;
        }

        int m_than_2 = 0;
        int uniqueV = 0;
        for(auto it = a.begin(); it != a.end(); it++)
        {
            if(it->second >= 2){
                m_than_2++;
            }else if(it->second == 1){
                uniqueV++;
            }
        }

        cout << m_than_2 + (uniqueV+1) / 2 << endl;

    }

}

