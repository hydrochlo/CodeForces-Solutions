// Valera and X
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
    
    int n;
    cin >> n;
    if(n%2 == 0) return;
    if(n == 1){
        cout << "NO";
        return;
    }
    vs s(n);
    for(int k=0; k<n; k++) cin >> s[k];

    char elX = s[0][0];
    char elnX = s[0][1];
    if(elX == elnX){
        cout << "NO";
        return;
    }
    bool isDiagonal = true;
    bool isOtherSame = true;
    
    // Main logic goes here
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i == j || i+j == n-1){
                if(elX != s[i][j]) {
                    isDiagonal = false;
                    break;
                }
            }
            else{
                if(elnX != s[i][j]){
                    isOtherSame = false;
                    break;
                }
            }
        }
    }
    if(isDiagonal && isOtherSame) cout << "YES";
    else cout << "NO";
}


int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}