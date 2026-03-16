// A. Passing the Ball
//link: https://codeforces.com/contest/2204/problem/A
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
    
    ll n; int count;
    cin >> n;
    
    
    string s; cin >> s;
    count = 0;

    for(int i=0; i<n; i++){
        if(s[i] == 'R'){
            count++;
        } else {
            count++;
            break;
        }
    }
    cout << count << endl;
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