// E. Area of a Circle
//link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/E
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
#define pi 3.141592653

void solve() {
    
    double r, area;
    cin >> r;
    
    cout << fixed << setprecision(9);
    // Main logic goes here
    area = pi * r * r;
    cout << area << endl;
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();

    return 0;
}