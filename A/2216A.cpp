// A. Course Wishes
//link: https://codeforces.com/problemset/problem/2216/A
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


void solve() {
    
    int n, k;
    cin >> n >> k; 

    vi a(k);
    for(int i=0; i<k; i++){
        cin >> a[i];
    }

    multimap<int, int, greater<int>> mm;
    int idx = 1;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        mm.insert({x, idx});
        // cout << x << " " << idx << endl;
        idx++;
    }

    vi result;
    int answer = 0;
    
    for(const auto &p: mm){
        if(p.first < k+1){
            int x = p.first;
            // cout << x << endl;
            while(x < k+1){
                result.pb(x);
                x++;
            }
            answer += (k+1) - p.first;
        }
    }

    cout << answer << endl;
    if(answer != 0){
        int sz = result.size();
        for(int i=0; i<sz; i++){
            cout << result[i] << " ";
        }
        cout << endl;
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