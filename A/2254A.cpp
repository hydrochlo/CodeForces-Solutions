// A. Riptide
//link: https://codeforces.com/contest/2254/problem/A
//author: https://codeforces.com/profile/
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
    
    vi a(3);
    for(int i=0; i<3; i++){
        cin >> a[i];
    }
    
    sort(a.begin(), a.end());
    // Main logic goes here
    if(a[0]==a[1] || a[1]==a[2] || a[2]==a[0]) cout << 0 << endl;
    else cout << a[2]-a[1] << endl;
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