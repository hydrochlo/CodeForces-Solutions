// A. Vitaliy and Pie
//link: https://codeforces.com/contest/525/problem/A
//author: iam-phoenix
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vvi = vector<vi>;
using vs = vector<string>;
using vvs = vector<vs>;
using vll = vector<ll>;

#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define endl '\n'

void solve(){
  ll n; cin >> n;
  string s; cin >> s;

  map<char, int> keys;
  int to_buy = 0;

  for(char c: s){
    if(islower(c)){
      keys[c]++;
    } else {
        char need = tolower(c);
        if(keys[need] > 0){
          keys[need]--;
        } else {
          to_buy++;
        }
    }
  }
  cout << to_buy << endl;
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();

    return 0;
}