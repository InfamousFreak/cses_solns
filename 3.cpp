#include <iostream>
#include <string>
using namespace std;
 
int findLongestRepetition(const string& sequence) {
    int maxLength = 1;
    int currentLength = 1;
    
    for (int i = 1; i < sequence.length(); i++) {
        if (sequence[i] == sequence[i - 1]) {
            currentLength++;
            maxLength = max(maxLength, currentLength);
        } else {
            currentLength = 1;
        }
    }
    
    return maxLength;
}
 
int main() {
    string sequence;
    cin >> sequence;
    
    int longestRepetition = findLongestRepetition(sequence);
    
    cout << longestRepetition << endl;
    
    return 0;
}