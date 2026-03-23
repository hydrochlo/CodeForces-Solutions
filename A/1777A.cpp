// A. Everybody Likes Good Arrays!
//link: https://codeforces.com/problemset/problem/1777/A
//author: iam-phoenix
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
    
    ll n;
    int count;
    cin >> n;
    
    // Main logic goes here
    vll arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    count = 0;
    for(int i=1; i<n; i++){
        if(arr[i-1]%2 != 0 && arr[i]%2 != 0) count++;
        else if(arr[i-1]%2 == 0 && arr[i]%2 == 0) count++;
    }
    cout << count << endl;
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