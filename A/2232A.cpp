// A. Convergence
//link: https://codeforces.com/contest/2232/problem/A
//author: https://codeforces.com/profile/iam-phoenix
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vvi = vector<vi>;
using vs = vector<string>;
using vl = vector<ll>;

#define pb push_back
#define all(x) (x).begin(), (x).end()
#define allr(a) a.rbegin(), a.rend()
#define sz(x) (int)(x).size()
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define endl '\n'


void solve() {
    
    int n; 
    cin >> n;

    vl a(n);
    map<ll, ll> mp;
    for(int i=0; i<n; i++) {
        cin >> a[i];
        mp[a[i]]++;
    }

    ll ans = 1e15;
    ll less = 0;

    for(auto i: mp){
        ll curr = i.second;

        ll big = n - less - curr;
        ll dans = max(less, big);

        ans = min(ans, dans);
        less += curr;
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