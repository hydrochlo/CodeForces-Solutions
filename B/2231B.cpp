// B. Another Sorting Problem
//link: https://codeforces.com/problemset/problem/2231/B
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
    for(int i=0; i<n; i++) cin >> a[i];

    ll curr_max = a[0];
    ll k = 0;

    for(int i=1; i<n; i++){
        if(a[i]<a[i-1]){
            ll x = curr_max - a[i];
            k = max(k, x);
        } else {
            curr_max = a[i];
        }
    }

    for(int i=0; i<n-1; i++){
        if(a[i+1]<a[i]) a[i+1] += k;
    }

    if(is_sorted(a.begin(), a.end())) cout << "YES" << endl;
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