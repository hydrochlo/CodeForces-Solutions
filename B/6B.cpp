// 
//link: 
//author: iam-phoenix
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
    
    int n, m;
    char ch;
    cin >> n >> m >> ch;
    
    // Main logic goes here
    vs s(n);
    set<char> ss;

    for(int i=0; i<n; i++){
        cin >> s[i];
    }

    // for(int i=0; i<n; i++){
    //     for(int j=0; j<m; j++){
    //         if(s[i][j]==ch){
    //             if((i+1)<=n && i-1>=0 && )
    //         }
    //     }
    // }

}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    //int t;
    //cin >> t;
    //while (t--) {
    //    solve();
    //}
    
    solve();

    return 0;
}