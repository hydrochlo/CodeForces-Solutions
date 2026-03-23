// A. Extremely Round
//link: https://codeforces.com/problemset/problem/1766/A
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
    
    ll n, digits = 0, answer = 0;
    cin >> n;
    
    int arr[7] = {0, 1, 10, 100, 1000, 10000, 100000};

    // Main logic goes here
    if(n <= 10){
        cout << n << endl;
        return;
    }
    ll temp = n;
    while(temp > 0){
        temp /= 10;
        digits++;
    }
    answer = (n/arr[digits]) + 9*(digits-1);

    cout << answer << endl;
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