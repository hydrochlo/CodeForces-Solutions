// A. Make it White
//link: https://codeforces.com/contest/1927/problem/A
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
    
    int n, totalB, gotB, count;
    cin >> n;

    totalB = 0;
    gotB = 0;
    count = 0;
    bool gotFirstB = false;

    string s; cin >> s;
    for(int i=0; i<n; i++){
        if(s[i]=='B'){
            totalB++;
        }
    }
    
    for(int i=0; i<n; i++){
        if(s[i] == 'B'){
            gotFirstB = true;
            gotB++;
        }
        if(gotFirstB){
            count++;
        }
        if(gotB == totalB){
            gotFirstB = false;
        }
    }
    cout << count << endl;
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