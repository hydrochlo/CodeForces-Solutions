// C1. Seating Arrangement (Easy Version)
//link: https://codeforces.com/contest/2232/problem/C1
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
    int n, x, s;
    cin >> n >> x >> s;

    string u;
    cin >> u;

    int temp_x = x;
    int temp_s = s;

    int ans = 0;
    int sz = u.length();
    for(int i=0; i<sz; i++){
        if(u[i]=='I' && (temp_x>=x && temp_s==s)){
            ans++;
            x--;
            s--;
        } else if(u[i]=='A' && temp_s>=s){
            s--;
            if(s==0){
                x--;
                s = temp_s;
            }
            ans++;
        } else if(u[i]=='E' && temp_s!=s){
            s--;
            if(s==0){
                x--;
                s = temp_s;
            }
            ans++;
        }
    }
    cout << ans << endl;

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