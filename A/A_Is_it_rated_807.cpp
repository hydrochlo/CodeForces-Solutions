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


bool isArrayReverseSorted(vi a, int n){
    if (n == 0 || n == 1) {
        return true;
    }
    for(int i=1; i<n; i++){
        if(a[i-1] < a[i]) return false;
    }
    return true;
}


void solve() {
    
    int n;
    cin >> n;
    
    // Main logic goes here
    vi a(n);
    vi b(n);

    bool done = false;

    for(int i=0; i<n; i++) cin >> a[i] >> b[i];

    for(int j=0; j<n; j++){
        if(a[j] != b[j]) {
            done = true;
        }
    }
    if (done){
        cout << "rated";
    } else{
        if(isArrayReverseSorted(a, n)) cout << "maybe";
        else cout << "unrated";
    }

}


int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}