// B. Not Quite Latin Square
//link: https://codeforces.com/contest/1915/problem/B
//username: iam-phoenix
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
    
    string a, b, c;
    cin >> a >> b >> c;

    bool isOk[100] = {0};

    sort(all(a));
    sort(all(b));
    sort(all(c));

    if(a != "ABC"){
        for(int i=0; i<3; i++){
            if(a[i] == 'A' || a[i] == 'B' || a[i] == 'C'){
                isOk[a[i]] = true;
            }
        }
    } else if(b != "ABC"){
        for(int i=0; i<3; i++){
            if(b[i] == 'A' || b[i] == 'B' || b[i] == 'C'){
                isOk[b[i]] = true;
            }
        }
    } else if(c != "ABC"){
        for(int i=0; i<3; i++){
            if(c[i] == 'A' || c[i] == 'B' || c[i] == 'C'){
                isOk[c[i]] = true;
            }
        }
    }

    for(int i=65; i<=67; i++){
        if(!isOk[i]){
            cout << (char)i << endl;
        }
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