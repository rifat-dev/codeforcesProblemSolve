
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


void saive(ll n){

}

int main()
{
    int64_t n,k;
    cin >> n >> k;
    int64_t mid;
    if(n%2 == 0)
        mid = n/2 - 1;

    else
        mid = n/2;

    if (mid < k-1)
    {
        int64_t pos = k-1-mid;
         pos--;
        cout << 2*pos+2 << endl;
    }
    else
    {
       k--;
        cout << 2*k+1 << endl;
    }

}
