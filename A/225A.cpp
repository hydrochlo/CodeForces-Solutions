// A. Dice Tower
//link: https://codeforces.com/contest/225/problem/A
//username: iam-phoenix
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vs = vector<string>;
using vll = vector<ll>;

#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define endl '\n'

void solve() {
    
    ll n, x;
    cin >> n >> x;
    
    // Main logic goes here
    vll a(n), b(n);
    for(int i=0; i<n; i++){
        cin >> a[i] >> b[i];
    }

    bool isPossible = true;

    for(int i=0; i<n; i++){
        if(a[i] == x || b[i] == x || a[i] == 7-x || b[i] == 7-x){
            isPossible = false;
            break;
        }
    }
    if(isPossible){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
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