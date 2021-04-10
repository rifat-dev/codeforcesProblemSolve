#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,c;
    cin >> a >> b >>c;

    int max_value = 0;

    int first = a +(b*c);
    int second = a *(b+c);
    int thard = a *b*c;
    int fourth = (a+b)*c;
    int fifth = a+b+c;

    if(first>max_value){
        max_value = first;
    }if(second>max_value){
        max_value = second;
    }if(thard>max_value){
        max_value = thard;
    }if(fourth>max_value){
        max_value = fourth;
    }if(fifth>max_value){
        max_value = fifth;
    }

    cout << max_value ;

    return 0;
}

