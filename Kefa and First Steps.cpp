#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> N;

    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        N.push_back(a);
    }

    int maxLength = 0;
    int curLength = 1;

    if(N.size()==1)
        cout << 1 << endl;
    else
    {
        for(int j=0; j<n-1; j++)
        {

            if(N[j] <= N[j+1])
                curLength++;
            else
            {
                if(curLength > maxLength)
                {
                    maxLength = curLength;
                    curLength = 1;
                }
                else
                    curLength = 1;
            }
        }

        if(curLength > maxLength)
        {
          cout<< curLength << endl;
        }
        else
            cout<< maxLength << endl;

    }


}
