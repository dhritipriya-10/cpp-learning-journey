#include<bits/stdc++.h>
using namespace std;
void lessThanX() {
    int n;
    cin >> n;
    int arr[n];
    cout << "Enter the elements in the array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int count = 0;
    int X;
    cout << "Enter the value of X: ";
    cin >> X;
    for(int i = 0; i < n; i++) {
        if(arr[i] < X) {
            count++;
        }
    }
    cout << "Count = " << count << endl;
}
int main() {
    cout << "Enter the value of n: ";
    lessThanX();
    return 0;
}