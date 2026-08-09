// A. Three Numbers on the Blackboard
//link: https://codeforces.com/contest/2256/problem/A
//author: https://codeforces.com/profile/_felu_
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
    
    vl a(3);
    for(int i=0; i<3; i++) cin >> a[i];

    sort(a.begin(), a.end());

    if((a[0]+a[1])<a[2]) cout << a[1] << endl;
    else cout << a[2] - a[0] << endl;

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