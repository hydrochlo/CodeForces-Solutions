// B. Remove Prefix
//link: https://codeforces.com/problemset/problem/1714/B
//author: https://codeforces.com/profile/iam-phoenix
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vb = vector<bool>;
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
    cin >> n;

    vi a(n+1);
    vi b(n+1, 0);
    // vi freq(n+1, 0);

    vb taken(n+1, false);
    a[0] = 0;

    for(int i=1; i<=n; i++){
        cin >> a[i];
    }

    for(int i=n; i>0; i--){
        if(!taken[a[i]]){
            if(i!=n){
                b[i] = 1 + b[i+1];
            } else b[i] = 1;
            taken[a[i]] = true;
        } else {
            b[i] = b[i+1];
        }
    }

    int cnt = 0, k = 0;
    for(int i=1; i<=n; i++){
        if(b[i]!=(n-k)){
            cnt++;
        } else if(b[i]==(n-k)){
            break;
        }
        k++;
    }

    cout << cnt << endl;
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