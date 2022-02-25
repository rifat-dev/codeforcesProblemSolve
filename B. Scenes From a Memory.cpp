#include<bits/stdc++.h>
#define n 110
using namespace std;
typedef long long ll;

bool a[n];

void prime()
{
    ll i, j;
    a[0]=a[1]=1;

    for(i=4; i<n ; i+=2)
        a[i] = 1;

    for(i=3; i<=sqrt(n); i+=2)
    {
        for(j=i*i; j<n; j=j+2*i)
            a[j]=1;
    }

}


int main()
{


    int t;
    cin >> t;

    while(t--)
    {
        ll k;
        string str;
        cin >> k >> str;

        prime();

        int ans = 0;
        for(int i=0; i<str.size(); i++){
            int k = str[i]-48;
            if(k==1 || k==4 || k==6 || k==8 || k==9){
                ans = k;
                break;
            }
        }

        if(ans != 0){
            cout << 1 << endl;
            cout << ans << endl;
        }else{
            int flag = 0;
            for(int i=0; i<str.size()-1; i++ ){
                for(int j=i+1; j<str.size(); j++){
                    ans = (str[i]-48)*10 + (str[j]-48);
                    if(a[ans] == 1){
                        flag = 1;
                        break;
                    }
                }

                if(flag){
                    break;
                }

            }
            cout << 2 << endl;
            cout << ans << endl;
        }

    }

}
