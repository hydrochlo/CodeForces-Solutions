// A. Circle of Students
//link: https://codeforces.com/contest/1203/problem/A
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
    
    ll n, maxCount, currCount;
    cin >> n;
    
    maxCount = 0;

    vi a(n);
    vi b(2*n);

    for(int i=0; i<n; i++) cin >> a[i];

    for(int i = 0; i < n; i++) {
        b[i] = b[i + n] = a[i];
    }

    // checking ascending: 1 -> 2 -> 3 -> 4 -> 5
    currCount = 0;
    for(int i=1; i< n*2; i++){
        if(b[i-1] < b[i]){
            currCount++;
            maxCount = max(currCount, maxCount);
        } else currCount = 0;
    }

    // checking descending: 5 -> 4 -> 3 -> 2 -> 1
    currCount = 0;
    for(int i=1; i< n*2; i++){
        if(b[i-1] > b[i]){
            currCount++;
            maxCount = max(currCount, maxCount);
        } else currCount = 0;
    }

    if(maxCount == (n-1)){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
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