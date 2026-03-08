// A. Help Vasilisa the Wise 2
//link: https://codeforces.com/contest/143/problem/A
//username: iam-phoenix
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vs = vector<string>;
using vll = vector<ll>;

#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define endl '\n'

void solve() {
    
    int r1, r2, c1, c2, d1, d2;
    cin>>r1>>r2>>c1>>c2>>d1>>d2;
    
    int a, b, c, d;
    a = (r1-c2+d1)/2;
    c = c1-a;
    d = d1-a;
    b = r1-a;

    if(a==b || b==c || c==d || a==d || b==d || a==c){
        cout << -1 << endl;
    }else if(a>9 || b>9 || c>9 || d>9){
        cout << -1 << endl;
    }else if(a==0 || b==0 || c==0 || d==0){
        cout << -1 << endl;
    } else {
        if((b+c) == d2 && (a+d) == d1 && (a+b) == r1 && (c+d) == r2 && (a+c) == c1 && (b+d) == c2){
            cout << a << " " << b << endl;
            cout << c << " " << d << endl;
        } else cout << -1;
    }
    
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();

    return 0;
}