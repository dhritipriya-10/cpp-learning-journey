//Check if two arrays are equal.

#include<bits/stdc++.h>
using namespace std;
void arreq() {
    int n;
    cin >> n;
    vector<int> arr1(n);
    vector<int> arr2(n);
    cout << "Enter the elements of array 1: ";
    for(int i = 0; i < n; i++) {
        cin >> arr1[i];
    }
    cout << "Enter the elements of array 2: ";
    for(int i = 0; i < n; i++) {
        cin >> arr2[i];
    }
    bool flag = true;
    for(int i = 0; i < n; i++) {
        if(arr1[i] != arr2[i]) {
            flag = false;
            break;
        }
    }
    if(flag) {
        cout << "The arrays are equal." << endl;
    }
    else {
        cout << "The arrays are not equal." << endl;
    }
}
int main() {
    cout << "Enter the value of n: ";
    arreq();
    return 0;
}