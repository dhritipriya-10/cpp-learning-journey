//Copy the elements of one array to another.

#include<bits/stdc++.h>
using namespace std;
void copyarr() {
    int n;
    cin >> n;
    vector<int> arr(n);
    vector<int> copy(n);
    cout << "Enter the elements in the array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        copy[i] = arr[i];
    }
    for(int i = 0; i < n; i++) {
        cout << copy[i] << " ";
    }
}
int main() {
    cout << "Enter the value of n: ";
    copyarr();
    return 0;
}