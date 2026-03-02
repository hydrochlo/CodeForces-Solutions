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
    
    int n;
    cin >> n;

    string s;
    cin >> s;
    
    transform(all(s), s.begin(), [](unsigned char c){ return tolower(c); });
    sort(all(s));
    // Main logic goes here
    int count = 1;
    rep(i, 1, n){
        if(s[i] != s[i-1]) count++;
    }
    if(count >= 26) cout << "YES" << endl;
    else cout << "NO" << endl;
}


int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}