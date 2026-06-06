//Count number of zeroes.

#include<bits/stdc++.h>
using namespace std;
void countZero() {
    int n;
    cin >> n;
    int arr[n];
    int zero = 0;
    cout << "Enter the elements in the array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++) {
        if(arr[i] == 0) {
            zero++;
        }
    }
    cout << "The number of zeroes are: " << zero << endl;
}
int main() {
    cout << "Enter the value of n: ";
    countZero();
    return 0;
}