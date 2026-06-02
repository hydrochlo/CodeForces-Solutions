// B. Everything Everywhere
//link: https://codeforces.com/problemset/problem/2226/B
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
    
    int n, cnt = 0;
    cin >> n;

    vi arr(n);

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    for(int i=0; i<n-1; i++){
        int g = gcd(arr[i], arr[i+1]);
        int d = abs(arr[i] - arr[i+1]);

        if(g==d) cnt++;
    }

    cout << cnt << endl;
    
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