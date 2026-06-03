// B. Alternating String
//link: https://codeforces.com/problemset/problem/2225/B
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
    string s;
    cin >> s;

    int ans = 0;
    int len = s.length();

    for(int i=0; i<len-1; i++){
        ans += (s[i] == s[i+1]);
    }

    cout << ((ans <= 2) ? "YES\n" : "NO\n");

}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}