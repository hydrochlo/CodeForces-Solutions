// A. The New Year: Meeting Friends
//link: https://codeforces.com/problemset/problem/723/A
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
    int arr[3];
    cin >> arr[0] >> arr[1] >> arr[2];
    
    sort(arr, arr+3);
    cout << ((arr[1]-arr[0]) + (arr[2]-arr[1])) << endl;
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();

    return 0;
}