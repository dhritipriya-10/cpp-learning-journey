#include<bits/stdc++.h>
using namespace std;
void findSecondLargest() {
    int n;
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements in the array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int largest = arr[0];
    for(int i = 0; i  <n; i++) {
        if(arr[i] > largest) {
            largest = arr[i]; 
        }
    }
    int secondLargest = INT_MIN;
    for(int i = 0; i < n; i++) {
        if(arr[i] != largest && arr[i] > secondLargest) {
            secondLargest = arr[i];
        }
    }
    cout << "The largest element is: " << largest << endl;
    if(secondLargest == INT_MIN) {
        cout << "The second largest element does not exist." << endl;
    }
    else {
        cout << "The second largest element is: " << secondLargest << endl;
    }
}
int main() {
    cout << "Enter the value of n: ";
    findSecondLargest();
    return 0;
}