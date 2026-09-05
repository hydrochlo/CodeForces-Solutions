// A. Moo Language School
//link: https://codeforces.com/contest/2259/problem/A
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
    
    int n, k;
    cin >> n >> k;
    
    string a;
    cin >> a;
    // Main logic goes here

    int ans = 0;
    for(int i=0; i<n; i++){
        bool lol = true;
        for(int j=0; j<k; j++){
            if(a[i+j]=='0') {
                lol = false;
                break;
            }
        }

        if(lol){
            ans++;
        }
        i += (k-1);
    }
    cout << ans << endl;
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