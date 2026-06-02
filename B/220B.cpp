// B. Little Elephant and Array
//link: https://codeforces.com/problemset/problem/220/B
//author: https://codeforces.com/profile/iam-phoenix
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vvi = vector<vi>;
using vs = vector<string>;
using vvs = vector<vs>;
using vl = vector<ll>;
using vpl = vector<pair<ll,ll>>;

#define pb push_back
#define all(x) (x).begin(), (x).end()
#define allr(a) a.rbegin(), a.rend()
#define sz(x) (int)(x).size()
#define endl '\n'
#define no cout << "NO" << endl
#define yes cout << "YES" << endl

const int N = 1e5+10;
int cnt[N];

void solve() {
    
    int n, m;
    cin >> n >> m;

    vl a(n+1);
    a[0] = 0;
    for(int i=1; i<=n; i++){
        ll x;
        cin >> x;
        if(x <= (1e5)){
            cnt[x]++;
        }
        a[i] = x;
    }

    for(int i=1; i<=N; i++){
        if(cnt[i]>0 && cnt[i]!=i){
            cnt[i] = 0;
        }
    }

    vl b(n+1);
    b[0] = 0;
    for(int i=1; i<=n; i++){
        if(cnt[a[i]]>1){
            cnt[a[i]]--;
        } else if(cnt[a[i]]==1){
            b[i] = 1;
        }
    }

    for(int i=1; i<=n; i++){
        b[i] += b[i-1];
    }

    for(int i=1; i<=n; i++){
        cout << b[i] << " ";
    }

    while(m--){
        int l, r;
        cin >> l >> r;

        // cout << b[r] - b[l] << endl;
    }
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();

    return 0;
}