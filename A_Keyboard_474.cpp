#include <bits/stdc++.h>
using namespace std;


using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int, int>;


#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define endl '\n'
#define rep(i, a, b) for (int i = (a); i < (b); ++i)
#define rrep(i, a, b) for (int i = (a); i >= (b); --i)


void solve() {
    
    char c; cin >> c;
    string s; cin >> s;
    
    // Main logic goes here
    if(c == 'R' || c == 'r'){
        for(int i=0; i<sz(s); i++){
            if(s[i] == 'a') s[i] = 'a';
            else if(s[i] == 'b') s[i] = 'v';
            else if(s[i] == 'c') s[i] = 'x';
            else if(s[i] == 'd') s[i] = 's';
            else if(s[i] == 'e') s[i] = 'w';
            else if(s[i] == 'f') s[i] = 'd';
            else if(s[i] == 'g') s[i] = 'f';
            else if(s[i] == 'h') s[i] = 'g';
            else if(s[i] == 'i') s[i] = 'u';
            else if(s[i] == 'j') s[i] = 'h';
            else if(s[i] == 'k') s[i] = 'j';
            else if(s[i] == 'l') s[i] = 'k';
            else if(s[i] == 'm') s[i] = 'n';
            else if(s[i] == 'n') s[i] = 'b';
            else if(s[i] == 'o') s[i] = 'i';
            else if(s[i] == 'p') s[i] = 'o';
            else if(s[i] == 'r') s[i] = 'e';
            else if(s[i] == 's') s[i] = 'a';
            else if(s[i] == 't') s[i] = 'r';
            else if(s[i] == 'u') s[i] = 'y';
            else if(s[i] == 'v') s[i] = 'c';
            else if(s[i] == 'w') s[i] = 'q';
            else if(s[i] == 'x') s[i] = 'z';
            else if(s[i] == 'y') s[i] = 't';
            else if(s[i] == ';') s[i] = 'l';
            else if(s[i] == ',') s[i] = 'm';
            else if(s[i] == '.') s[i] = ',';
            else if(s[i] == '/') s[i] = '.';
        }
    }
        else {
            for(int i=0; i<sz(s); i++){
                if(s[i] == 'a') s[i] = 's';
                else if(s[i] == 'b') s[i] = 'n';
                else if(s[i] == 'c') s[i] = 'v';
                else if(s[i] == 'd') s[i] = 'f';
                else if(s[i] == 'e') s[i] = 'r';
                else if(s[i] == 'f') s[i] = 'g';
                else if(s[i] == 'g') s[i] = 'h';
                else if(s[i] == 'h') s[i] = 'j';
                else if(s[i] == 'i') s[i] = 'o';
                else if(s[i] == 'j') s[i] = 'k';
                else if(s[i] == 'k') s[i] = 'l';
                else if(s[i] == 'l') s[i] = ';';
                else if(s[i] == 'm') s[i] = ',';
                else if(s[i] == 'n') s[i] = 'm';
                else if(s[i] == 'o') s[i] = 'p';
                else if(s[i] == 'p') s[i] = '[';
                else if(s[i] == 'q') s[i] = 'w';
                else if(s[i] == 'r') s[i] = 't';
                else if(s[i] == 's') s[i] = 'd';
                else if(s[i] == 't') s[i] = 'y';
                else if(s[i] == 'u') s[i] = 'i';
                else if(s[i] == 'v') s[i] = 'b';
                else if(s[i] == 'w') s[i] = 'e';
                else if(s[i] == 'x') s[i] = 'c';
                else if(s[i] == 'y') s[i] = 'u';
                else if(s[i] == 'z') s[i] = 'x';
                else if(s[i] == ',') s[i] = '.';
                else if(s[i] == '.') s[i] = '/';
            }
        }

    cout << s;
}



int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}