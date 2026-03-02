#include <bits/stdc++.h>
using namespace std;


using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int, int>;


#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define endl '\n'
#define rep(i, a, b) for (int i = (a); i < (b); ++i)
#define rrep(i, a, b) for (int i = (a); i >= (b); --i)




void solve() {
    
    int n, p, q;
    cin >> n;
    
    // Main logic goes here
    set<int> s;
    int x, y;
    
    cin >> p; 
    vi a(p);
    for(int i=0; i<p; i++) cin >> a[i];
    cin >> q; 
    vi b(q);
    for(int i=0; i<q; i++) cin >> b[i];

    for(int i=0; i<p; i++){
        if(a[i] != 0) s.insert(a[i]);
    }
    for(int j=0; j<q; j++){
        if(b[j] != 0) s.insert(b[j]);
    }
    
    if(s.size() == n) cout << "I become the guy." << endl;
    else cout << "Oh, my keyboard!" << endl;
}


int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}