#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
 
int main() {
    
    int n; cin >> n;
    vector<int> nums(n);
    for(int &x: nums) cin >> x;

    vector<int> ones;
    vector<int> twos;
    vector<int> threes;

    for(int i=0; i<n; i++){
        if(nums[i] == 1) ones.push_back(i+1);
        else if(nums[i] == 2) twos.push_back(i+1);
        else threes.push_back(i+1);
    }
    int curr_min = min((int)ones.size(), (int)twos.size());
    int count = min(curr_min, (int)threes.size());

    if (count == 0) cout << count;
    else {
        cout << count << "\n";
        for(int k = 0; k < count; k++){
            cout << ones[k] << " " << twos[k] << " " << threes[k] << "\n";
        }
    }
    return 0;
}
