// B. Alternating Current 
//link: https://codeforces.com/problemset/problem/343/B
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
#define yes cout << "YES" << endl
#define no cout << "NO" << endl


void solve() {
    
    string s;
    cin >> s;

    if(s.length()==1){
        no;
        return;
    }

    stack<char> st;
    st.push(s[0]);

    int count_p = 0;
    int count_m = 0;

    for(int i=1; i<s.length(); i++){
        if(!st.empty() && (st.top()==s[i])){
            st.pop();
        } else {
            st.push(s[i]);
        }
    }

    if(st.empty()){
        yes;
        return;
    }

    no;
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();

    return 0;
}