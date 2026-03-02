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
    
    // Main logic goes here
    vi a(n);
    for(int &x: a) cin >> x;
    sort(all(a));
    int sum=0;
    int count=1;
    rep(i, 0, n) sum += a[i];
    int b = a[n-1];
    rep(i, 1, n) if(b <= sum-b){
        b += a[n-1-i]; count++;
    }
    cout << count;
}


int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}