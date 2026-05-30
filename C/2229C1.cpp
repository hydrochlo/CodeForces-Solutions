// C1. We Be Flipping (Easy Version)
//link: https://codeforces.com/problemset/problem/2229/C1
//author: https://codeforces.com/profile/iam-phoenix
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vvi = vector<vi>;
using vs = vector<string>;
using vl = vector<ll>;

#define pb push_back
#define all(x) (x).begin(), (x).end()
#define allr(a) a.rbegin(), a.rend()
#define sz(x) (int)(x).size()
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define endl '\n'


void solve() {
    
    int n;
    cin >> n;

    vi a(n), b;
    for(auto &el: a) cin >> el; 

    int cnt = 0;
    for(int i=n-1; i>=0; i--){
        int x = a[i];
        if(cnt%2) x*=-1;
        if(x>0){
            cnt++;
            b.pb(i+1);
        }
    }

    cout << b.size() << endl;

    for(auto x: b){
        cout << x << " ";
    }
    cout << endl;

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