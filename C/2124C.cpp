// C. Subset Multiplication
//link: https://codeforces.com/contest/2124/problem/C
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
    
    int n;
    cin >> n;

    vi b(n);
    for(int i=0; i<n; i++){
        cin >> b[i];
    }

    ll g = 0;
    ll ans = 1;

    for(int i=n-1; i>=0; i--){
        g = gcd(g, b[i]);
        ans = lcm(ans, b[i]/g);
    }

    cout << ans << endl;

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