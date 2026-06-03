// C. Specialty String
//link: https://codeforces.com/problemset/problem/2200/C
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
    
    int n;
    cin >> n;

    string s;
    cin >> s;

    if(n==1){
        no;
        return;
    }

    stack<char> st;

    st.push(s[0]);
    for(int i=1; i<n; i++){
        if(!st.empty() && st.top()==s[i]){
            st.pop();
        }
        else st.push(s[i]);
    }

    if(st.empty()){
        yes;
    } else no;

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