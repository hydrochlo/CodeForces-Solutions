//Arpa’s hard exam and Mehrdad’s naive cheat
#include <bits/stdc++.h>
using namespace std;


using ll = long long;
using vi = vector<int>;
using vs = vector<string>;
using vll = vector<ll>;
using pii = pair<int, int>;


#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define endl '\n'


void solve() {
    
    ll n;
    cin >> n;
    
    // Main logic goes here
    if(n == 0){
        cout << 1 << endl;
        return;
    }
    if(n%4 == 1) cout << 8 << endl;
    else if(n%4 == 2) cout << 4 << endl;
    else if(n%4 == 3) cout << 2 << endl;
    else if(n%4 == 0) cout << 6 << endl;
    else cout << -1 << endl;
}


int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // int t;
    // cin >> t;
    // while (t--) {
    //    solve();
    // }
    
    solve();

    return 0;
}