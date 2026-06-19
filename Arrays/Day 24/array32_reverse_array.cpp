//Reverse Array (Actual Reversal using Swapping)

#include<bits/stdc++.h>
using namespace std;
void revarr() {
    int n;
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements in the array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int left = 0;
    int right = n - 1;

    while(left < right) {
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;

        left++;
        right--;
    }
    for(int i = 0; i < n; i++) {
    cout << arr[i] << " ";
    }
}

int main() {
    cout << "Enter the value of n: ";
    revarr();
    return 0;
}