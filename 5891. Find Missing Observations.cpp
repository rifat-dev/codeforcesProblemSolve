#include<bits/stdc++.h>
using namespace std;

void missingRolls(vector<int>& rolls, int mean, int n) {
       int curSum = accumulate(rolls.begin(), rolls.end(), 0), m = rolls.size();
        int missingSum = mean * (n + m) - curSum;
        if (missingSum < n || missingSum > 6*n) cout << "NO" << endl;;

        int part = missingSum / n, rem = missingSum % n;
        vector<int> ans(n, part);
        for (int i = 0; i < rem; ++i)
            ++ans[i];
        cout << "YES" << endl;

}

int main(){

  int m;
  cin >> m;

  vector<int> rolls(m);
  for(int i=0; i<m; i++) cin >> rolls[i];
  int mean , n;
  cin >> mean >> n;
  missingRolls(rolls, mean , n);

}
