#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        string str;
        cin  >> str;
        string two = str;
        reverse(two.begin(), two.end());

        cout << str+two << endl;
    }
}
