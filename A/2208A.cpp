// A. Bingo Candies
//link: https://codeforces.com/contest/2208/problem/A
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
    
    int n, m, count;
    cin >> n;
    m = n*n;
    bool ok = 1;

    vi a(m);
    for(int i=0; i<m; i++){
        cin >> a[i];
    }

    for(int i=0; i<m; i++){
        count = 0;
        for(int j=0; j<m; j++){
            if(a[i] == a[j]){
                count++;
            }
            if(m - count < n){
                ok = 0;
                break;
            }
        }
    }

    if(ok) cout << "YES" << endl;
    else cout << "NO" << endl;

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