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
    
    for(int i=n+1; i<9999; i++){
        int a, b, c, d;
        a = i%10;
        b = (i/10)%10;
        c = (i/100)%10;
        d = (i/1000)%10;
        if(a != b && a != c && a != d && b != c && b != d && c != d){
            cout << i;
            return;
        }
    }
}


int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}