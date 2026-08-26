// B. Evanescent
//link: https://codeforces.com/problemset/problem/2254/B
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
    string s;
    cin >> n >> s;
    int ans = n;

    bool flag1 = false, flag2 = false;
    int cnt = 1;
    for(int i=1; i<n; i++){
        if(s[i] != s[i-1]){
            cnt++;
        }
    }

    for(int i=1; i<n-1; i++){
        if(s[i-1]!=s[i] && s[i+1]!=s[i]){
            flag1 = true;
            if(s[i-1]==s[i+1]){
                flag2 = true;
            }
        }
    }

    if(flag2){
        cout << cnt-2 << endl;
    } else if(flag1){
        cout << cnt-1 << endl;
    } else {
        cout << cnt << endl;
    }
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