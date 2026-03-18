// A. Yaroslav and Permutations
//link: https://codeforces.com/contest/296/problem/A
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
    
    int n;
    cin >> n;

    vi nums(n);
    
    if(n == 1){
        cout << "YES" << endl;
        return;
    }

    map<int, int> freq;
    int max_count = 0;

    // Read input and count frequencies simultaneously
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        freq[num]++;
        max_count = max(max_count, freq[num]);
    }

    if (max_count <= (n + 1) / 2) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();

    return 0;
}