#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n == 1) {
        cout << 1 << endl;
    } else if (n <= 3) {
        cout << "NO SOLUTION" << endl;
    } else {
        // Print even numbers first
        for (int i = 2; i <= n; i += 2) {
            cout << i << " ";
        }
        // Print odd numbers next
        for (int i = 1; i <= n; i += 2) {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}
