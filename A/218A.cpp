// A. Mountain Scenery
//link: https://codeforces.com/contest/218/problem/A
//username: iam-phoenix
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vs = vector<string>;
using vll = vector<ll>;

#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define endl '\n'

void solve() {
    
    int n, k;
    cin >> n >> k;
    
    vi a(2*n + 1);
    // Main logic goes here
    for(int i=0; i<(2*n + 1); i++){
        cin >> a[i];
    }

    for(int i=1; i<(2*n + 1); i+=2){
        if(k > 0 && (a[i]-1) > a[i-1] && (a[i]-1) > a[i+1]){
            a[i]--;
            k--;
        }
    }

    for(int i=0; i<(2*n + 1); i++){
        cout << a[i] << " ";
    }

}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();

    return 0;
}