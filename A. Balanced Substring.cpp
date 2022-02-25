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

        string str;
        cin >> str;

        int flag = 0;
        for(int i=0; i<n-1; i++){
           if(str[i]!=str[i+1]){
              flag = 1;
              cout << i+1 << " " << i+2 << endl;
              break;
           }
        }

        if(!flag)
            cout << -1 << " " << -1 << endl;

    }
}
