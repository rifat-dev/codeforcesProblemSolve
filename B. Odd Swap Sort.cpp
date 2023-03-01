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

        int even = 0, odd = -1, flag = 0;
        for(int i=0; i<n; i++)
        {
            int c;
            cin >> c;
            if(c%2 == 0)
            {
                if(even > c) flag = 1;
                else even = c;
            }
            else
            {

                if(odd > c) flag = 1;
                else odd = c;
            }
        }

        cout << (flag ? "No" : "Yes") << endl;


    }

}
