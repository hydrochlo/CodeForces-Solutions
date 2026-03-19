// A. Halloumi Boxes
//link: https://codeforces.com/problemset/problem/1903/A
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
    
    ll n, k;
    cin >> n >> k;
    
    // Main logic goes here
    vi arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    if(k > 1) cout << "YES" << endl;
    else if(k == 1 && is_sorted(all(arr))) cout << "YES" << endl;
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