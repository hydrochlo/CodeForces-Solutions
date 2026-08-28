// A. Creating Abbreviations
//link: https://codeforces.com/problemset/problem/2257/A
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
    
    int n, m;
    cin >> n >> m;
    
    // Main logic goes here
    vs a(n), b(m);
    for(int i=0; i<n; i++) cin >> a[i];    
    for(int i=0; i<m; i++) cin >> b[i];
    
    int cnt1[26] = {0};
    for(int i=0; i<n; i++){
        int idx = a[i][0] - 'a';
        cnt1[idx]++;
    }

    int cnt2[26] = {0};
    for(int i=0; i<m; i++){
        int len = b[i].length();
        for(int j=0; j<len; j++){
            int idx = b[i][j] - 'A';
            cnt2[idx]++;
        }
    }

    for(int i=0; i<26; i++){
        // if(cnt2[i]<cnt1[i]){
        //     cout << "NO" << endl;
        //     return;
        // }

        if(cnt2[i]>0 && cnt1[i]==0) {
            cout << "NO" << endl;
            return;
        }

    }

    cout << "YES" << endl;
    return;
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