#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> N;

    for(int i=0 ; i<n; i++)
    {
        int a;
        cin >>a;
        N.push_back(a);
    }

    sort(N.begin(), N.end());

    int totalCar = 0;
    int singleSit = 0;
    int doubleSit = 0;
    int counts = 0;

    for(int j= n-1; j>=0; j--)
    {
        if(N[j]==4)
            totalCar++;

        else if(N[j]==3)
        {
            totalCar++;
            singleSit++;
        }
        else if(N[j]==2)
        {
            if(doubleSit == 0)
            {
                totalCar++;
                doubleSit += 2;
            }
            else
                doubleSit -= 2;
        }
        else
        {
            if(singleSit != 0)
                singleSit--;

            else if (doubleSit != 0)
                doubleSit--;

            else
                counts++;
        }
    }


    if(counts != 0)
    {
        if(counts%4 == 0)
            cout << totalCar+(counts/4) << endl;

        else
            cout << totalCar+(counts/4)+1 << endl;
    }else{
       cout << totalCar << endl;
    }


}
