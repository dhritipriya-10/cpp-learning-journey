//Print All Occurrences of an Element

#include<bits/stdc++.h>
using namespace std;
void cntOcc() {
    int n;
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements in the array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int target;
    cout << "Enter the element to search: ";
    cin >> target;
    cout << "The occurences are at index: ";
    for(int i = 0; i < n; i++) {
        if(arr[i] == target) {
            cout << i << " ";
        }
    }
}
int main() {
    cout << "Enter the value of n: ";
    cntOcc();
    return 0;
}