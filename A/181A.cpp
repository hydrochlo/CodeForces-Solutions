// A. Series of Crimes
//link: https://codeforces.com/contest/181/problem/A
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
    
    int n, m; cin >> n >> m;

    vs a(n);

    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    vi rows, cols;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(a[i][j] == '*'){
                rows.push_back(i+1);
                cols.push_back(j+1);
            }
        }
    }

    for(int i=0; i<3; i++){
        
        if(rows[0] != rows[1] && rows[1] == rows[2]){
            if(cols[0] == cols[2]){
                cout << rows[0]<< " " << cols[1] << endl;
                break;
            }
            if(cols[0] == cols[1]){
                cout << rows[0] << " " << cols[2] << endl;
                break;
            }
            
        } else if(rows[0] == rows[1] && rows[1] != rows[2]){
            if(cols[0] == cols[1]){
                cout << rows[2] << " " << cols[0] << endl;
                break;
            }
            if(cols[0] == cols[2]){
                cout << rows[2] << " " << cols[1] << endl;
                break;
            }
            if(cols[1] == cols[2]){
                cout << rows[2] << " " << cols[0] << endl;
                break;
            }
        }
    }
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();

    return 0;
}