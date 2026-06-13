//Frequency of elements

#include<bits/stdc++.h>
using namespace std;
void freqOfElements() {
    int n;
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements in the array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int count = 0;
    int target;
    cout << "Enter the target value: ";
    cin >> target;
    for(int i = 0; i < n; i++) {
        if(arr[i] == target) {
            count++;
        }
    }
    cout <<"Frequency = " << count << endl;
}
int main() {
    cout << "Enter the value of n: ";
    freqOfElements();
    return 0;
}