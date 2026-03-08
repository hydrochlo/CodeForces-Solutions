// A. Ksenia and Pan Scales
//link: https://codeforces.com/contest/382/problem/A
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
    
    string s1, s2, left, right;
    bool gotIt;
    cin >> s1 >> s2;
    
    left = "";
    right = "";
    // Main logic goes here
    gotIt = false;
    for(int i=0; i<s1.size(); i++){
        if(s1[i] == '|') {
            gotIt = true;
        } 
        if(!gotIt){
            left += s1[i];
        } else{
            if(s1[i] == '|'){
                ;
            } else {
                right += s1[i];
            }
        }
    } 
    if((left.size()+right.size()+s2.size())%2 != 0){
        cout << "Impossible" << endl;
    } else {
        if(left.size() < right.size()){
            // left += s2;
            int char_need = (left.size()+right.size()+s2.size())/2 - left.size();
            for(int i=0; i<s2.size(); i++){
                if(i < char_need){
                    left += s2[i];
                } else {
                    right += s2[i];
                }
            }
            if(left.size() == right.size()){
                cout << left << "|" << right << endl;
            } else {
                cout << "Impossible" << endl;
            }
        } else {
            // right += s2;
            int char_need = (left.size()+right.size()+s2.size())/2 - right.size();
            for(int i=0; i<s2.size(); i++){
                if(i < char_need){
                    right += s2[i];
                } else {
                    left += s2[i];
                }
            }
            if(left.size() == right.size()){
                cout << left << "|" << right << endl;
            } else {
                cout << "Impossible" << endl;
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