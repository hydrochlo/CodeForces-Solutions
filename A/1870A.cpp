// A. MEXanized Array
//link: https://codeforces.com/contest/1870/problem/A
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
    
    ll n, k, x, sum = 0;
    cin >> n >> k >> x;
    
    if(k-1 > x || n < k){
        cout << -1 << endl;
        return;
    }
    if(k == x){
        x--;
    }
    for(ll i=0; i<n; i++){
        if(k > i) sum += i;
        else sum += x;
    }
    cout << sum << endl;
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