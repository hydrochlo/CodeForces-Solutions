// A. Exciting Bets
//link: https://codeforces.com/problemset/problem/1543/A
//author: https://codeforces.com/profile/iam-phoenix
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vvi = vector<vi>;
using vs = vector<string>;
using vvs = vector<vs>;
using vl = vector<ll>;
using vpl = vector<pair<ll,ll>>;

#define pb push_back
#define all(x) (x).begin(), (x).end()
#define allr(a) a.rbegin(), a.rend()
#define sz(x) (int)(x).size()
#define endl '\n'
#define no cout << "NO" << endl
#define yes cout << "YES" << endl


void solve() {
    ll a, b, ans, g;
    cin >> a >> b;

    if(b>a) swap(a, b);

    if(a==b) cout << 0 << " " << 0 << endl;
    else {
        g = a - b;
        ans = min(b%g, g-b%g);
        cout << g << " " << ans << endl;
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