// B. Dreamoon and WiFi
//link: https://codeforces.com/problemset/problem/476/B
//author: https://codeforces.com/profile/
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
    string s1, s2;
    cin >> s1 >> s2;

    int ps1 = 0, ps2 = 0, uns2 = 0;

    for(int i=0; i<s1.size(); i++){
        if(s1[i]=='+') ps1++;
        if(s2[i]=='+') ps2++;
        if(s2[i]=='?') uns2++;
    }

    int counter = 0;
    for(int i=0; i< (1<<uns2); i++){
        if((__builtin_popcount(i)+ps2) == ps1){
            counter++;
        }
    }

    cout << fixed << setprecision(9) << (double)counter/(double)(1<<uns2) << endl;
}


int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // int n = 7;
    // cout << bitset<8>(n) << endl;
    // cout << __builtin_popcount(n) << endl;

    // int x = 1;
    // int y = 3;
    // cout << (x<<y) << endl;

    solve();

    return 0;
}