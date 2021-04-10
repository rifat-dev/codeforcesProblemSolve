#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, h;
    cin >> n >> h;
    int sum = 0;

    for(int i=0; i<n ; i++)
    {
        int a;
        cin >>a;
        if(a<=h){
            sum+=1;
        }else{
           sum+=2;
        }

    }

    cout << sum;

    return 0;
}
