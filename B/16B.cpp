// B. Burglar and Matches
//link: https://codeforces.com/contest/16/problem/B
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
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define lll __int128
#define endl '\n'
#define no cout << "NO" << endl
#define yes cout << "YES" << endl
#define pi 3.14159265358979323846LL
#define MOD 676767677


void solve() {
    
    ll n, m;
    ll taken, total, needed;

    taken = 0, total = 0    ;

    cin >> n >> m;
    
    multimap<int, int, greater<int>> lol;

    for(int i=0; i<m; i++){
        int key, value;
        cin >> key >> value;
        lol.insert({value, key});
    }

    for (auto const& [key, val] : lol) {
        int k;
        needed = n - taken;
        if(val<needed){
            k = val;
            taken += k;
            total += k*key;
        } else if(val>needed){
            k = needed;
            taken += k;
            total += k*key;
        } else if(val==needed){
            taken += val;
            total += key*val;
        }
    }

    cout << total << endl;
}

int main() {
    
    fastio;
    
    solve();

    return 0;
}