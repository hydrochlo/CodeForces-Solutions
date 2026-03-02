// #include <bits/stdc++.h>
#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;
typedef long long ll;

int main(){

    auto start = high_resolution_clock::now();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, b, d;
    cin >> n >> b >> d;
    // vector<int> arr(n);

    int count = 0, sum = 0;

    // for(int i=0; i<n; i++) cin >> arr[i];

    // for(int j=0; j<n; j++){
    //     if(arr[j] <= b) sum += arr[j];
    //     if(sum > d){
    //         count++;
    //         sum = 0;
    //     }
    // }

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        
        if (a <= b) {
            sum += a;
            if (sum > d) {
                count++;
                sum = 0; // 3. Fixed logic: Empty the waste completely
            }
        }
    }

    cout << count << "\n";

    auto end = high_resolution_clock::now();

    auto duration = duration_cast<milliseconds>(end - start);

    cout << "Time taken: " << duration.count() << " milliseconds" << endl;

    return 0;

}
