// B. Minus Two
//link: https://codeforces.com/contest/2259/problem/B
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
    
    int n;
    cin >> n;
    
    // Main logic goes here
    vi a(n);
    int cnt_odd = 0, cnt_0 = 0, cnt_2 = 0;
    for(int i=0; i<n; i++){
        cin >> a[i];
        if(a[i]%2!=0) cnt_odd++;
        else if(a[i]%4==0) cnt_0++;
        else if(a[i]%4!=0) cnt_2++;
    }

    cout << max(cnt_odd, max(cnt_0, cnt_2)) << endl;
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
