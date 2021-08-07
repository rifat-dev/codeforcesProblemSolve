#include<bits/stdc++.h>
using namespace std;


void saive()
{

    int k,n,m;
    cin >> k >> n >> m;
    vector<int>a(n),b(m),c;

    for(int i=0; i<n; i++)
        cin >> a[i];

    for(int i=0; i<m; i++)
        cin >> b[i];

    int flag = 0;

    int a_i = 0;
    int b_j = 0;

    while(true)
    {

        if(a_i < n && b_j <m)
        {
            if (a[a_i]==0 && b[b_j] ==0)
            {
                k+=2;
                c.push_back(a[a_i]);
                c.push_back(b[b_j]);
                a_i++;
                b_j++;

            }
            else if(a[a_i] <= k)
            {
                if(a[a_i] == 0)
                {
                    k++;
                    c.push_back(a[a_i]);
                    a_i++;
                }
                else
                {
                    c.push_back(a[a_i]);
                    a_i++;
                }
            }
            else if(b[b_j]<=k)
            {
                if(b[b_j] == 0)
                {
                    k++;
                    c.push_back(b[b_j]);
                    b_j++;
                }
                else
                {
                    c.push_back(b[b_j]);
                    b_j++;
                }

            }else if(a[a_i]>k && b[b_j]>k){
              flag=1;
              break;
            }
        }
        else if(a_i < n)
        {
            if(a[a_i] == 0)
            {
                k++;
                c.push_back(a[a_i]);
                a_i++;
            }
            else if(a[a_i] <= k)
            {
                c.push_back(a[a_i]);
                a_i++;
            }
            else
            {
                flag=1;
                break;
            }
        }
        else if(b_j<m)
        {
            if(b[b_j] == 0)
            {
                k++;
                c.push_back(b[b_j]);
                b_j++;
            }
            else if(b[b_j] <= k)
            {
                c.push_back(b[b_j]);
                b_j++;

            }
            else
            {
                flag=1;
                break;
            }

        }
        else
        {
            break;
        }
    }

    if(flag)
        cout << -1 << endl;

    else
    {

        for(int i=0; i<c.size(); i++)
            cout << c[i] << " ";
        cout << endl;
    }

}


int main()
{

    int t;
    cin >> t;

    while(t--)
        saive();

}
