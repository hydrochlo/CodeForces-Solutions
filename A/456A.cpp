// A. Laptops
//link: https://codeforces.com/contest/456/problem/A
//author: iam-phoenix
#include <iostream>
#include <algorithm>
#include <vector>
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
    
    int n; cin >> n;
    vi a(n), b(n);

    for(int i=0; i<n; i++){
        cin >> a[i] >> b[i];
    }

    for(int i=0; i<n; i++){
        if(b[i] > a[i]){
            cout << "Alex Happy";
            return;
        }
    }

    cout << "Poor Alex";
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();

    return 0;
}