#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t; cin >> t;
    vector<int> result;
    while(t--){
        int n, m, d; cin >> n >> m >> d;

        long long sum = 0;
        int count = 0;
        for(int i=0; i<n; i++){
            if(sum <= d){
                sum += m;
                count++;
            } else break;
        }
        if(count > 0){
            int tower = (n+count - 1)/count;
            result.push_back(tower);
        } else {
            result.push_back(0);
        }
    }

    for(int x: result) cout << x << "\n";
    
    return 0;
}