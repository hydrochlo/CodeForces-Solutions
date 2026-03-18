// B. Right Maximum
//link: https://codeforces.com/contest/2204/problem/B
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
    ll n, op, curr; cin >> n;
    vi v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    op = 0; curr = 0;
    for(int i=0; i<n; i++){
        if(v[i] >= curr){
            op++;
            curr = v[i];
        }
    }

    cout << op << endl;

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