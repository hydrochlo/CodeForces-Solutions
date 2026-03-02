#include <iostream>
#include <vector>
using namespace std;

int main() {
    long long n, a;
    cin >> n >> a;

    vector<char> arr_c(n);
    vector<int> arr_n(n);

    long long sum = a;
    long long count = 0;

    for(int i = 0; i < n; i++){
        cin >> arr_c[i] >> arr_n[i];
    }

    for(int j=0; j<n; j++){
        if(arr_c[j] == '+') sum += arr_n[j];
        else{
            if(sum - arr_n[j] < 0) count++;
            else sum -= arr_n[j];
        }
    }

    cout << sum << " " << count;

    return 0;
}
