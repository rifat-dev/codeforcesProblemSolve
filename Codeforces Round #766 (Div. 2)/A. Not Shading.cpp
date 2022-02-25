#include <bits/stdc++.h>
using namespace std;

typedef long long ll;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,m,r,c,cw=0,cb=0,ans;
        cin>>n>>m>>r>>c;
        char ch[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>ch[i][j];
                ch[i][j]=='W'?cw++:cb++;
            }
        }
        if(cb==0)ans=-1;
        else if(ch[r-1][c-1]=='B')ans=0;
        else{
            bool one=false;
            for(int i=0;i<n;i++)one|=ch[i][c-1]=='B';
            for(int j=0;j<m;j++)one|=ch[r-1][j]=='B';
            if(one)ans=1;
            else ans=2;
        }
        cout<<ans<<endl;
    }
    return 0;
}
