#include <iostream>
#include <vector>
using namespace std;

int main(){

    int n;
    cin >> n;
    vector<int> nums(n);
    int count = 1;
    for(int &x: nums) cin >> x;
    if(n == 1) count;
    else{
        for(int i=1; i<n; i++){
            if(nums[i-1] < nums[i]) count++;
            else break;
        }
    }
    cout << count;
}