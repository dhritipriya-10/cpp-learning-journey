//Reverse the elements in an array.

#include<bits/stdc++.h>
using namespace std;
void revarr() {
    int n;
    cin >> n;
    vector<int> arr(n);
    cout<<"Enter the elements in the array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for(int i = n-1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main() {
    cout << "Enter the value of n: ";
    revarr();
    return 0;
}