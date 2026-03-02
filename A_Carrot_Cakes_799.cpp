#include <iostream>
using namespace std;

int main(){
    long int n, t, k, d;
    cin >> n >> t >> k >> d;

    long int time = (n/k)*t;
    long int new_time = t + d;

    if(new_time >= time) cout << "NO";
    else cout << "YES";

    return 0;
}