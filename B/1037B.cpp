// B. Reach Median
//link: https://codeforces.com/contest/1037/problem/B
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
    
    ll n, s, sum;
    cin >> n >> s;

    sum=0;

    vll a(n); 
    for(int i=0; i<n; i++){
        cin >> a[i]; 
    }
    sort(all(a)); 

    if (a[n/2] < s) {
        for(int i = n/2; i < n; i++) {
            if(a[i] < s) sum += abs(s - a[i]);
        }
    } 
    else if (a[n/2] > s) {
        for(int i = n/2; i >= 0; i--) {
            if(a[i] > s) sum += abs(s - a[i]);
        }
    }
    
    cout << sum << endl;
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();

    return 0;
}