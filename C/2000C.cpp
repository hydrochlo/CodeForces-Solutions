// C. Numeric String Template
//link: https://codeforces.com/problemset/problem/2000/C
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

bool check(vl arr, string str){

    if(arr.size() != str.length()) return 0;

    vl alpha(26);
    vector<bool> seen(26, false);

    int len = str.length();
    for(int i=0; i<len; i++){
        int n = str[i] - 'a';
        if(!seen[n]){
            alpha[n] = arr[i];
            seen[n] = true;
        }
        else if(seen[n] && alpha[n]!=arr[i]){
            return 0;
        }
    }
    return 1;
}

void solve() {
    
    int n;
    cin >> n;

    vl a(n);
    for(int i=0; i<n; i++) cin >> a[i];

    int m;
    cin >> m;

    for(int i=0; i<m; i++){
        string s;
        cin >> s;

        if(check(a, s)) cout << "YES" << endl;
        else cout << "NO" << endl;
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