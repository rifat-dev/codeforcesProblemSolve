#include<bits/stdc++.h>
using namespace std;


void saive()
{

    int n,k;
    cin >> n >> k;


    unordered_map <int,vector<int>> arr;
    vector<int> ans(n);
    vector<int> indexs;


    for(int i=0; i<n; i++)
    {
        int a;
        cin >> a;
        arr[a].push_back(i);
    }

    for(auto i : arr)
    {

        if(i.second.size() >= k)
        {

            int index = 1;
            for(int j=0; j<i.second.size(); j++)
            {
                if(index<=k)
                {
                    ans[i.second[j]] = index;
                    index++;
                }
                else
                    ans[i.second[j]] = 0;
            }
        }
        else
        {
            for(int j=0; j<i.second.size(); j++)
                indexs.push_back(i.second[j]);

        }
    }

    int leftIndexes = indexs.size() % k;

    int color = 1;
    for(int i=0; i<indexs.size()-leftIndexes; i++)
    {


        ans[indexs[i]] = color;
        color++;
        if(color>k)
            color = 1;
    }

    for(int i=0; i<ans.size(); i++)
        cout << ans[i] << " ";
    cout << endl;

}

int main()
{
    int t;
    cin >> t;

    while(t--)
        saive();
}
