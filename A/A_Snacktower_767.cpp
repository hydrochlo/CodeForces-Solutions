#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> nums(n);
    vector<int> temp(n);
    int count = 0;
    for(int &x: nums) cin >> x;

    temp=nums;
    sort(temp.begin(), temp.end());
    for(int i=0; i<n; i++){
        if(nums[i] != temp[n-1-i]){
            cout << " "<< "\n";
            count++;
        } else {
            cout << temp[n-1-i];
        }
    }

    return 0;
}
