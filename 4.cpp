#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];  // Define an array of size n

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    long long moves = 0; // Use long long to handle large values
    for (int i = 1; i < n; ++i) {
        if (arr[i] < arr[i - 1]) {
            moves += arr[i - 1] - arr[i];
            arr[i] = arr[i - 1]; // Make the current element equal to the previous one
        }
    }

    cout << moves << endl;

    return 0;
}
