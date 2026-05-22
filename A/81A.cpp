// A. Plug-in
//link: https://codeforces.com/contest/81/problem/A
//author: https://codeforces.com/profile/iam-phoenix
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vvi = vector<vi>;
using vs = vector<string>;
using vvs = vector<vs>;
using vl = vector<ll>;
using vpl = vector<pair<ll,ll>>;

#define pb push_back
#define all(x) (x).begin(), (x).end()
#define allr(a) a.rbegin(), a.rend()
#define sz(x) (int)(x).size()
#define endl '\n'
#define no cout << "NO" << endl
#define yes cout << "YES" << endl


void solve() {
    
    string s, res = "";
    cin >> s;
    
    stack<char> st;
    // Main logic goes here
    st.push(s[0]);

    for(int i=1; i<s.length(); i++){
        if(!st.empty() && st.top()==s[i]){
            // cout << "I'm inside if" << endl;
            st.pop();
        } else st.push(s[i]);
    }
    while(!st.empty()){
        // cout << st.top() << endl;
        res += st.top();
        st.pop();
    }

    for(int i=res.length()-1; i>=0; i--){
        cout << res[i];
    } cout << endl;
    
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();

    return 0;
}