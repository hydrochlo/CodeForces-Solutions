#include <iostream>
#include <vector>
using namespace std;

int main(){
    long long n; cin >> n;
    vector<int> nums(n);
    vector<int> min;
    vector<int> max;

    for(int &x: nums) cin >> x;

    for(int i=0; i<n; i++){
        long long maximum=0, minimum=0;
        if(i == 0){
            maximum = nums[n-1] - nums[0];
            minimum = nums[1] - nums[0];
        } 
        else if(i == n-1){
            maximum = nums[n-1] - nums[0];
            minimum = nums[n-1] - nums[n-2];
        } else {
            if(nums[i] - nums[i-1] < nums[i+1] - nums[i]){
                minimum = nums[i] - nums[i-1];
                if(nums[i]-nums[0] > nums[n-1]-nums[i]) maximum = nums[i] - nums[0];
                else maximum = nums[n-1] - nums[i];
            } else {
                minimum = nums[i+1] - nums[i];
                if(nums[i]-nums[0] > nums[n-1]-nums[i]) maximum = nums[i] - nums[0];
                else maximum = nums[n-1] - nums[i];
                
            }
        }
        max.push_back(maximum);
        min.push_back(minimum);
    }
    for(int j=0; j<n; j++) cout << min[j] << " " << max[j] << "\n";
    return 0;
}