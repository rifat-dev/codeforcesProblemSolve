#include<bits/stdc++.h>
using namespace std;


void saive()
{

    int n;
    cin >>n;

    int arr[n+2][n+2];

    if(n==1)
        cout << 1 << endl;

    else if(n==2)
        cout << -1 << endl;

    else
    {

        int k=1;
        for(int i=1 ; i<=n; i++)
        {
            if(i%2!=0)
            {
                int j=1;
                while(j<=n)
                {
                    arr[i][j]=k;
                    k++;
                    j+=2;
                }
            }
            else
            {
                int j=2;
                while(j<=n)
                {
                    arr[i][j]=k;
                    k++;
                    j+=2;
                }
            }
        }

        for(int i=1 ; i<=n; i++)
        {
            if(i%2!=0)
            {
                int j=2;
                while(j<=n)
                {
                    arr[i][j]=k;
                    k++;
                    j+=2;
                }
            }
            else
            {
                int j=1;
                while(j<=n)
                {
                    arr[i][j]=k;
                    k++;
                    j+=2;
                }
            }
        }

        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++)
                cout << arr[i][j] << " ";
            cout << endl;
        }

    }




}


int main()
{

    int t;
    cin >> t;

    while(t--)
        saive();

}
