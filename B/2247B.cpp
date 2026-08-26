// B. Yet Another Constructive
//link: https://codeforces.com/problemset/problem/2247/B
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
    
    int n, k, m;
    cin >> n >> k >> m;
    
    // Main logic goes here
    if(k>m) {
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;
    for(int i=0; i<n; i++){
        cout << (i%k ? 1:  m-k+1) << " ";
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