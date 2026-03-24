// A. Forked!
//link: https://codeforces.com/problemset/problem/1904/A
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

int dx[4] = {1, -1, -1, 1}, dy[4] = {1, 1, -1, -1};

void solve() {
    
    ll a, b;
    cin >> a >> b;

    ll x_king, y_king;
    cin >> x_king >> y_king;

    ll x_queen, y_queen;
    cin >> x_queen >> y_queen;

    set<pair<int, int>> k_hits, q_hits;

    for(int i=0; i<4; i++){
        k_hits.insert({x_king + dx[i]*a, y_king + dy[i]*b});
        k_hits.insert({x_king + dx[i]*b, y_king + dy[i]*a});
        
        q_hits.insert({x_queen + dx[i]*a, y_queen + dy[i]*b});
        q_hits.insert({x_queen + dx[i]*b, y_queen + dy[i]*a});
    }

    int ans = 0; 

    for(auto positions: k_hits){
        if(q_hits.find(positions) != q_hits.end()){
            ans++;
        }
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