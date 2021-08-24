#include<bits/stdc++.h>
using namespace std;

int main()
{

    long long int x;

    cin >> x;

    vector<int> arr;

    while(x>0)
    {
        int a = x%10;
        int c = 9 - a;

        if(a==9 && x==9)
            arr.push_back(a);
        else if(c<a)
            arr.push_back(c);

        else
            arr.push_back(a);

        x = x/10;

    }

    for(int i = arr.size()-1; i>=0 ; i--)
        cout << arr[i];
}
