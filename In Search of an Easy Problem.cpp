#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int result = 0;

    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        if (a==1){
            result = 1;
        }
    }

    if(result){
        cout << "HARD";
    }else{
        cout << "EASY";
    }
    return 0;
}

