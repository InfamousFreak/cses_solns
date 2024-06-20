#include <iostream>
#include <algorithm>

using namespace std;

long long findNumberInSpiral(long long y, long long x) {
    long long n = max(y, x);
    long long n_squared = n * n;

    if (n % 2 == 0) {
        if (y == n) {
            return n_squared - (n - x);
        } else {
            return n_squared - (n - 1) - (n - y);
        }
    } else {
        if (y == n) {
            return n_squared - (x - 1);
        } else {
            return n_squared - (n - y);
        }
    }
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        long long y, x;
        cin >> y >> x;
        cout << findNumberInSpiral(y, x) << endl;
    }
    
    return 0;
}
