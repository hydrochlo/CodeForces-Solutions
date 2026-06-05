// A. Sum of Round Numbers
//link: https://codeforces.com/problemset/problem/1352/A
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
    
    int n, temp, cnt = 0;
    cin >> n;

    vi a;

    temp = n;
    int digit = 0;
    while(temp > 0){
        int x = temp%10;
        if(x != 0) cnt++;
        int new_d = 0;
        while(x!= 0 && new_d < digit){
            x *= 10;
            new_d++;
        }
        if(x!=0) a.pb(x);
        temp /= 10;
        digit++;
    }

    int len = a.size();
    cout << cnt << endl;
    for(int i=0; i<len; i++){
        cout << a[i] << " ";
    }
    cout << endl;
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