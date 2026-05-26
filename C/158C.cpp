// C. Cd and pwd commands
//link: https://codeforces.com/problemset/problem/158/C
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
    int n;
    cin >> n;

    cin.ignore();

    stack<string> st;

    while(n--){
        string s;

        getline(cin, s);

        vs result;
        if(s=="pwd"){
            if(st.empty()) cout << "/" << endl;
            else {
                while(!st.empty()){
                    string p = st.top();
                    result.pb(p);
                    st.pop();
                }

                for(int i=result.size()-1; i>=0; i--){
                    if(i==0){
                        cout << "/" << result[i] << "/";
                    } else {
                        cout << "/" << result[i];
                    }
                    st.push(result[i]);
                } 

                cout << endl;

            }
        } else if(s=="cd .."){
            if(!st.empty()){
                st.pop();
            } 
        } else if(s.find("cd ..") != string::npos){
            st.pop();
            for(int i=6; i<s.length(); i++){
                string x = "";
                while(s[i]!='/' && i < s.length()){
                    // cout << "I'm inside while loop" << endl;
                    x+= s[i];
                    i++;
                }
                if(x!=".."){
                    st.push(x);
                } else {
                    st.pop();
                }
                
            }
        } 
        else {

            if(s.find("cd /") != string::npos){
                // === THE FIX IS HERE ===
                while(!st.empty()) { 
                    st.pop(); // Clear the stack because it's an absolute path
                }
                // =======================
                for(int i=4; i<s.length(); i++){
                    string x = "";
                    while(s[i]!='/' && i < s.length()){
                        x+= s[i];
                        i++;
                    }
                    if(x!=".."){
                        st.push(x);
                    } else {
                        st.pop();
                    }
                    
                }
            } else {
                for(int i=3; i<s.length(); i++){
                    string x = "";
                    while(s[i]!='/' && i < s.length()){
                        x+= s[i];
                        i++;
                    }
                    if(x!=".."){
                        st.push(x);
                    } else {
                        st.pop();
                    }
                    
                }
            }
            
        }

    }
    
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();

    return 0;
}