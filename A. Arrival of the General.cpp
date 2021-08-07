#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, totalSec = 0;
    cin >> n;

    vector<int> arr;

    for(int i=0; i<n; i++)
    {
        int a;
        cin >>a;
        arr.push_back(a);
    }

    int minValue = arr[0];
    int minIndex = 0;

    int maxValue = arr[0];
    int maxIndex = 0;

    for(int i=1; i<n; i++)
    {
        if(arr[i] <= minValue)
        {
            minValue = arr[i];
            minIndex = i;
        }
    }

    for(int i=1; i<n; i++)
    {
        if(arr[i] > maxValue)
        {
            maxValue = arr[i];
            maxIndex = i;
        }
    }

    n--;

    if(maxIndex>minIndex)
    {
       cout << (maxIndex+(n-minIndex))-1 ;
    }else{
        cout << (maxIndex+(n-minIndex));
    }

}
