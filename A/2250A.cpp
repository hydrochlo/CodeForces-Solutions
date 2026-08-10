// A. Threshold Movement
//link: https://codeforces.com/problemset/problem/2250/A
//author: https://codeforces.com/profile/_felu_
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

    int mn = INT_MAX, mx = INT_MIN;
    for(int i=1; i<=n; i++){
        int x;
        cin >> x;

        if(i&1) mn = min(mn, x);
        else mx = max(mx, x);
    }

    if(mn-mx > 1 && n%2==0) cout << "YES" << endl;
    else cout << "NO" << endl;
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