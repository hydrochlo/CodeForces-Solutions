#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
    int t; cin >> t;
    vector<int> result;


    while(t--){
        int n; cin >> n;
        int count=0;
        vector<int> nums(n);
        
        for(int &x: nums) cin >> x;

        sort(nums.begin(), nums.end());
        if(n == 1) result.push_back(1);
        else{
            int max = nums[n-1];
            for(int i=0; i<n; i++){
                if(nums[i] == max) count++;
            }
            result.push_back(count);
        }
        
    }

    for(int x: result) cout << x << "\n";
    return 0;
}