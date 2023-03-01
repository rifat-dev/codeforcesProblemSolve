#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int x,y;
        cin >> x >> y;

        if(x ==0 && y==0)
        {
            cout << 0<< endl;
        }
        else{
            long long int value = sqrt(x*x+y*y);
            long double res = sqrt(x*x+y*y);

            if(res == value){
                cout << 1 << endl;
            }else{
                cout << 2 << endl;
            }

        }
    }
}
