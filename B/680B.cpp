 // B. Bear and Finding Criminals
//link: https://codeforces.com/contest/680/problem/B
//author: iam-phoenix
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
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define lll __int128
#define endl '\n'
#define no cout << "NO" << endl
#define yes cout << "YES" << endl
#define pi 3.14159265358979323846LL
#define MOD 676767677
 
 
void solve() {
    
    int n, a, count = 0, st; 
    cin >> n >> a;
 
    vi arr(n);
    for(int j=0; j<n; j++){
        cin >> arr[j];
    }
 
    st = a-1;
 
    if(arr[st]==1) count++;
 
    for(int d=1; d<n; d++){
        int l_i = st - d;
        int r_i = st + d;
 
        bool l_exits = (l_i >= 0);
        bool r_exits = (r_i < n);
 
        if(l_exits && r_exits){
            if(arr[l_i]==1 && arr[r_i]==1) count+=2;
        }
        else if(l_exits && !r_exits){
            if(arr[l_i]==1) count++;
        }
        else if(!l_exits && r_exits){
            if(arr[r_i]==1) count++;
        }
    }
    cout << count << endl;
}
 
int main() {
    
    fastio;
    
    solve();
 
    return 0;
}