#include <bits/stdc++.h>
using namespace std;

string generateString(int n, int k) {
    string result;
    result.reserve(n);

    for (int i = 0; i < n; ++i) {
        char current_char = 'a' + (i % k);
        result += current_char;
    }

    return result;
}

int main() {
    int n, k; 
    if (!(cin >> n >> k)) return 0;

    string resultStr = generateString(n, k);
    cout << resultStr << endl;

    return 0;
}