#include<bits/stdc++.h>
using namespace std;
void countX() {
    int n;
    cin >> n;
    int arr[n];
    cout << "Enter the elements in the array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int X;
    cout << "Enter the value of X: ";
    cin >> X;
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] == X) {
            count++;
        }
    }
    cout << "Count: " << count << endl;
}
int main() {
    cout << "Enter the value of n: ";
    countX();
    return 0;
}