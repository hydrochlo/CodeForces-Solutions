#include <bits/stdc++.h>
using namespace std;


using ll = long long;
using vi = vector<int>;
using vs = vector<string>;
using vll = vector<ll>;
using pii = pair<int, int>;


#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define endl '\n'


void solve() {
    
    ll n, m;
    cin >> n>> m;

    if(n%2 != 0) n++;
    if(abs(n-m) < 2) cout << -1;
    else{
        cout << n << " " << n+1 << " " << n+2;
    }
    
    // Main logic goes here
    
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