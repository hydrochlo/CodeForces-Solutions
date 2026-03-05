//A. Panoramix's Prediction
#include <bits/stdc++.h>
using namespace std;


using ll = long long;
using vi = vector<int>;
using vs = vector<string>;
using vll = vector<ll>;
using pii = pair<int, int>;


#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define endl '\n'


void solve() {
    
    int n, m;
    cin >> n >> m;
    
    // Main logic goes here
    if(n >= m){
        cout << "NO" << endl;
    } else {
        if(n==2 && m==3) cout << "YES";
        else if(n==3 && m==5) cout << "YES";
        else if(n==5 && m==7) cout << "YES";
        else if(n==7 && m==11) cout << "YES";
        else if(n==11 && m==13) cout << "YES";
        else if(n==13 && m==17) cout << "YES";
        else if(n==17 && m==19) cout << "YES";
        else if(n==19 && m==23) cout << "YES";
        else if(n==23 && m==29) cout << "YES";
        else if(n==29 && m==31) cout << "YES";
        else if(n==31 && m==37) cout << "YES";
        else if(n==37 && m==41) cout << "YES";
        else if(n==41 && m==43) cout << "YES";
        else if(n==43 && m==47) cout << "YES";
        else cout << "NO";

    }
}


int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();

    return 0;
}