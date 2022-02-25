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


        string st;

        for(int i=1; i<=n; i++)
        {
            int j=i;
            int N = n*2;
            while(N)
            {

                for(int k=1; k<=j; k++)
                {
                    st += '(';
                    N--;
                }

                for(int k=1; k<=j; k++)
                {
                    st += ')';
                    N--;
                }

                if(N < j*2)
                {
                   j = N/2;

                }

            }

             cout << st << endl;
             st = "";
        }

    }


}
