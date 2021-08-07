#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n,x;
    cin >> n >> x;

    int total = 0;
    for(int i=1; i<=n ; i++)
    {
        if(x%i==0){
            if(x/i <= n){
                total++;
            }
        }

    }


    cout << total << '\n';
}
