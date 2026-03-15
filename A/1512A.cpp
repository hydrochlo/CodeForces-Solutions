// A. Spy Detected!
//link: https://codeforces.com/contest/1512/problem/A
//author: iam-phoenix
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vvi = vector<vi>;
using vs = vector<string>;
using vvs = vector<vs>;
using vll = vector<ll>;

#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define endl '\n'

void solve() {
    
    ll n;
    int result, last, answer;
    cin >> n;
    
    // Main logic goes here
    vi arr(n);
    vi arr_cpy(n);

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    arr_cpy = arr;
    sort(all(arr_cpy));

    result = arr_cpy[0];
    last = arr_cpy[n-1];

    if(result != last){
        if(result != arr_cpy[1]){
            answer = result;
        } else {
            answer = last;
        }
    }

    for(int i=0; i<n; i++){
        if(answer == arr[i]){
            cout << i+1 << endl;
        }
    }

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