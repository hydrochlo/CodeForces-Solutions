// D. Odd Queries
//link: https://codeforces.com/contest/1807/problem/D
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
    
    ll n, q;
    cin >> n >> q;
    
    // Main logic goes here
    vi v(n), l(q), r(q), k(q); 
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    for(int i=0; i<q; i++){
        cin >> l[i] >> r[i] >> k[i];
    }
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    //int t;
    //cin >> t;
    //while (t--) {
    //    solve();
    //}
    
    solve();

    return 0;
}