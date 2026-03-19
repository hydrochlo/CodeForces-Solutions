// A. Cover in Water
//link: https://codeforces.com/problemset/problem/1900/A
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

void solve() {
    
    int n; cin >> n;
    string s; cin >> s;

    bool continuous_three_empty_cells = false;
    int total_number_of_empty_cells = 0;

    for(int i=0; i<n; i++){
        if(s[i] == '.' && i+1 < n && s[i+1] == '.' && i+2 < n && s[i+2] == '.'){
            continuous_three_empty_cells = true;
            break;
        }
        if(s[i] == '.'){
            total_number_of_empty_cells++;
        }
    }

    if(continuous_three_empty_cells) cout << 2 << endl;
    else cout << total_number_of_empty_cells << endl;

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