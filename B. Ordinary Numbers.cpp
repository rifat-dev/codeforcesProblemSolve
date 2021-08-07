#include<bits/stdc++.h>
using namespace std;

void saive(){
    int one = 1;
    int tow = 11;
    int three = 111;
    int four = 1111;
    int five = 11111;
    int six = 111111;
    int seven = 1111111;
    int eight = 11111111;
    int nine = 111111111;
    int ten = 1111111111;

    int n;
    cin >> n;

    int length = std::to_string(n).length();

    if(length == 1){
        cout << n << '\n';
    }else if(length == 2){
        cout << 9 + (n/tow) << '\n';
    }else if(length == 3){
        cout << 9*2 + (n/three) << '\n';
    }else if(length == 4){
        cout << 9*3 + (n/four) << '\n';
    }else if(length == 5){
        cout << 9*4 + (n/five) << '\n';
    }else if(length == 6){
        cout << 9*5 + (n/six) << '\n';
    }else if(length == 7){
        cout << 9*6 + (n/seven) << '\n';
    }else if(length == 8){
        cout << 9*7 + (n/eight) << '\n';
    }else if(length == 9){
        cout << 9*8 + (n/nine) << '\n';
    }else if(length == 10){
        cout << 9*9 + (n/ten) << '\n';
    }

}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    for(int i=0; i<t; i++){
        saive();
    }
}
