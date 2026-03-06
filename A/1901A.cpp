// A. Line Trip
//link: https://codeforces.com/contest/1901/problem/A
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
    
    ll n, x;
    cin >> n >> x;
    vll points_arr;
    points_arr.pb(0);

    // Main logic goes here
    for(int i=0; i<n; i++){
        ll point;
        cin >> point;
        points_arr.pb(point);
    }
    points_arr.pb(x);
    n = points_arr.size();

    ll max_distance_between_points = INT_MIN;

    for(int j=1; j<n; j++){
        if(j == n-1){
            max_distance_between_points = max(max_distance_between_points, 2 * (points_arr[j] - points_arr[j-1]));
        } else {
            max_distance_between_points = max(max_distance_between_points, (points_arr[j] - points_arr[j-1]));
        }
    }

    cout << max_distance_between_points << endl;
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