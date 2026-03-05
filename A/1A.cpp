// A. Theatre Square
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
    
    ll n, m, a;
    cin >> n >> m >> a;
    
    // Main logic goes
    ll blocks = (n+a-1)/a;
    ll lol = m - a;
    while(lol > 0){
        blocks += (n+a-1)/a;
        lol -= a;
    }            
    cout << blocks;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 
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