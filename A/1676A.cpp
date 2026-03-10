// A. Lucky?
//link: https://codeforces.com/contest/1676/problem/A
//username: iam-phoenix
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vvi = vector<vi>;
using vs = vector<string>;
using vvs = vector<vs>;
using vll = vector<ll>;

#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define endl '\n'

void solve() {
    
    int n=6, sum1, sum2;
    string s;
    cin >> s;
    
    sum1 = 0; sum2 = 0;

    for(int i=0; i<n; i++){
        if(i<=2){
            sum1 += s[i] - '0';
        } else {
            sum2 += s[i] - '0';
        }
    }
    if(sum1 == sum2) cout << "YES" << endl;
    else cout << "NO" << endl;
    
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