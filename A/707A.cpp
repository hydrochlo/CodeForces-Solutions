// Brain's Photos
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
    
    int n, m;
    cin >> n >> m;

    vector<vector<char>> matrix(n, std::vector<char>(m, 0)); 
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++) {
            cin >> matrix[i][j];
        }
    }

    bool bw = true;
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++) {
            if(matrix[i][j] == 'C' || matrix[i][j] == 'M' || matrix[i][j] == 'Y'){
                bw = false;
            }
        }
    }

    if(bw) cout << "#Black&White";
    else cout << "#Color";
}


int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}