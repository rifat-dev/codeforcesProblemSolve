#include<bits/stdc++.h>

using namespace std;

void saive()
{

    int n;
    cin >> n;

    vector<int> a;

    for(int i=0; i<n; i++)
    {
        int c;
        cin >> c;
        a.push_back(c);
    }

    int minValue = 101;
    int minIndex = 0;

    int maxValue = 0;
    int maxIndex = 0;

    for(int i=0; i<n; i++)
    {
        if(minValue > a[i])
        {
            minValue = a[i];
            minIndex = i+1;
        }

        if(maxValue< a[i])
        {
            maxValue = a[i];
            maxIndex = i+1;
        }
    }

    int k = min((n- min(minIndex,maxIndex))+1, max(minIndex , maxIndex));

    cout << min((min(minIndex,maxIndex)+(n-max(minIndex , maxIndex))+1) , k) << endl;





}

int main()
{

    int t;
    cin >> t;

    while(t--)
        saive();


}
