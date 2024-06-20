#include<iostream>
 
using namespace std;
 
int findMissingNumber(int n, int numbers[], int size){
    long expectedsum = (long)n * (n+1)/2;
    long actualSum = 0;
 
    for (int i=0;i<size;i++){
        actualSum += numbers[i];
    }
 
    return expectedsum - actualSum;
 
}
 
int main(){
    int n;
    cin >> n;
 
    int numbers[n-1];
    for(int i = 0; i < n - 1;i++){
        cin >> numbers[i];
    }
 
    int missingNumber = findMissingNumber(n, numbers, n-1);
 
    cout << missingNumber << endl;
 
    return 0;
}