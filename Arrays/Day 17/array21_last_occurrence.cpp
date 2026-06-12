//Find last occurrence of target element

#include<bits/stdc++.h>
using namespace std;
void lastOcc() {
    int n;
    cin >> n;
    int arr[n];
    bool found = false;
    cout << "Enter the elements in the array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int target;
    cout << "Enter the target value: ";
    cin >> target;
    for(int i = n - 1; i >= 0; i--) {
        if(arr[i] == target){
            cout << i;
            break;
        }
    }
}
int main() {
    cout << "Enter the value of n: ";
    lastOcc();
    return 0;
}