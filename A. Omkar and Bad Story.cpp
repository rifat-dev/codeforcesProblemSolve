#include<bits/stdc++.h>

using namespace std;

vector<int> niceArray(vector<int> a)
{

    sort(a.begin(), a.end());
    for(int i=a.size()-1; i>=1; i--)
    {
        int lastValue = a[i];

        for(int j= i-1; j>=0; j--)
        {
            int value = lastValue-a[j];

            if (!binary_search(a.begin(), a.end(),value))
            {

                a.push_back(value);

                a = niceArray(a);

            }
        }
    }

    return a;
}


void saive()
{

    int n;
    cin >> n;

    vector<int> a;

    for(int i=0; i<n; i++)
    {
        int a1;
        cin >> a1;
        a.push_back(a1);
    }

    bool isNegative = false;

    for(int i=0; i<n; i++)
    {
        if(a[i]<0)
        {
            isNegative = true;
            break;
        }
    }

    if(isNegative)
        cout << "NO" << endl;

    else
    {
        vector<int> newA = niceArray(a);

        if(newA.size()<300)
        {
            cout << "YES" << endl;
            cout << newA.size() << endl;
            for(int j=0; j<newA.size(); j++)
                cout << newA[j] << " ";
            cout << endl;
        }
        else
            cout << "NO" << endl;
    }


}




int main()
{

    int t;
    cin >> t;

    while(t--)
        saive();

}
