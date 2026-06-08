// A. HQ9+
//link: https://codeforces.com/contest/133/problem/A
//author: https://codeforces.com/profile/iam-phoenix
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vvi = vector<vi>;
using vs = vector<string>;
using vl = vector<ll>;

#define pb push_back
#define all(x) (x).begin(), (x).end()
#define allr(a) a.rbegin(), a.rend()
#define sz(x) (int)(x).size()
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define endl '\n'


void solve() {
    
    string s;
    cin >> s;

    int len = s.length();
    bool got = false;
    
    for(int i=0; i<len; i++){
        if(s[i]=='H' || s[i]=='Q' || s[i]=='9'){
            got = true;
        }
    }
    
    if(got) yes;
    else no;
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();

    return 0;
}