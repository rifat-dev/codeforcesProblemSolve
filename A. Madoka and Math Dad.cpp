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

        string s;

        if( (n-4) % 3 ==0 || n==4)
        {


            int i=0;
            while(n>0)
            {
                if(i%2 == 0)
                {
                    cout << 1;
                    n -= 1;
                }
                else
                {
                    cout << 2;
                    n -= 2;
                }

                i++;
            }


        }
        else
        {
            int i=0;
            while(n>0)
            {
                if(i%2 == 0)
                {
                    cout << 2;
                    n -= 2;
                }
                else
                {
                    cout << 1;
                    n -= 1;
                }
                i++;
            }
        }

        cout << endl;
    }

    cout << endl;

}
