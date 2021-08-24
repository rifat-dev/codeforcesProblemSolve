#include<bits/stdc++.h>
using namespace std;

int main()
{

    int x;

    cin >> x;

    vector<int> arr;

    while(x>0)
    {
        int a = x%10;
        int c = 9 - a;

        if(c<a)
            arr.push_back(c);

        else
            arr.push_back(a);

       x = x/10;

    }

    for(int i = arr.size()-1; i>=0 ; i--)
        cout << arr[i];
}

