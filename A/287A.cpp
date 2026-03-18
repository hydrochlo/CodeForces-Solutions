// A. IQ Test
//link: https://codeforces.com/contest/287/problem/A
//author: iam-phoenix
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
    
    vs s(4);
    for(int i=0; i<4; i++){
        cin >> s[i];
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(s[i][j] == '.' && s[i][j+1] == '#'){
                if((s[i+1][j] == '.' && s[i+1][j+1] == '.') || (s[i+1][j] == '#' && s[i+1][j+1] == '#')){
                    cout << "YES" << endl;
                    return;
                }
            } else if(s[i][j] == '#' && s[i][j+1] == '.'){
                if((s[i+1][j] == '.' && s[i+1][j+1] == '.') || (s[i+1][j] == '#' && s[i+1][j+1] == '#')){
                    cout << "YES" << endl;
                    return;
                }
            } else if(s[i][j] == '#' && s[i][j+1] == '#'){
                if(s[i+1][j] == '.' && s[i+1][j+1] == '.'){
                    ;
                } else {
                    cout << "YES" << endl;
                    return;
                }
            } else if(s[i][j] == '.' && s[i][j+1] == '.'){
                if(s[i+1][j] == '#' && s[i+1][j+1] == '#'){
                    ;
                } else {
                    cout << "YES" << endl;
                    return;
                }
            }
        }
    }

    cout << "NO" << endl;

}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();

    return 0;
}