#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;

    for(int i=0; i<t; i++)
    {

        long long int n;
        cin >> n;


     if(n%2050 == 0){
         long long int res = n/2050;
         long long int sum = 0;
         while(res!=0){
            sum = sum + res%10;
            res = res/10;
         }
          cout << sum << '\n';

     }else{
         cout << -1 << '\n';

     }



    }
}
