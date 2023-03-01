#include<bits/stdc++.h>
using namespace std;
const int N = 100000+10;
vector<bool> isPrime(N, 1);

void isPrimes()
{

    isPrime[0]=isPrime[1] = 0;

    for(int i=2; i<N; ++i)
    {
        if(isPrime[i] == 1)
        {
            for(int j=2*i; j<N; j += i)
            {
                isPrime[j] = 0;
            }
        }
    }

}

int main()
{
    isPrimes();

    int n;
    cin >> n;

    if(n == 1)
    {
        cout << 1 << endl;
        cout << 1 << endl;
    }
    else if(n == 2)
    {
        cout << 1 << endl;
        cout << 1 << " " << 1 << endl;
    }
    else
    {
        cout << 2 << endl;
        for(int i=1; i<=n ; i++)
        {
            if(isPrime[i+1] == 1)
            {
                cout << 1 << " ";
            }
            else
            {
                cout << 2 << " ";
            }
        }
    }



    cout << endl;


}
