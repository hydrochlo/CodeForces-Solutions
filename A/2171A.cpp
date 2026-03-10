// A. Shizuku Hoshikawa and Farm Legs
//link: https://codeforces.com/contest/2171/problem/A
//username: iam-phoenix
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

void solve() {
    
    int n; cin >> n;
    if(n%2 != 0){
        cout << 0 << endl;
        return;
    } else {
        cout << (n/4 + 1) << endl;
    }
    
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
       solve();
    }

    return 0;
}