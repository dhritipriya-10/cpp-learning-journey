//Check if the Array is Sorted

#include<bits/stdc++.h>
using namespace std;
void sortedArray() {
    int n;
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements in the array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    bool isSorted = true;
    for(int i = 0; i < n-1; i++) {
        if(arr[i] > arr[i+1]){
            isSorted = false;
            break;
        }
    }
    if(isSorted) {
        cout << "Sorted" << endl;
    }
    else {
        cout << "Not Sorted" << endl;
        }
    }

int main() {
    cout << "Enter the value of n: ";
    sortedArray();
    return 0;
}