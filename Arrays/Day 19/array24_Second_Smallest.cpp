#include<bits/stdc++.h>
using namespace std;
void secSmallest() {
    int n;
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements in the array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int smallest = arr[0];
    for(int i = 0; i < n; i++) {
        if(arr[i] < smallest) {
            smallest = arr[i];
        }
    }
    int secondSmallest = INT_MAX;
    for(int i = 0; i < n; i++) {
        if(arr[i] != smallest && arr[i] < secondSmallest) {
            secondSmallest = arr[i];
        }
    }
    cout << "The smallest element is: " << smallest << endl;
    if(secondSmallest == INT_MAX) {
        cout << "The second smallest element does not exist." << endl;
    }
    else {
        cout << "The second smallest element is: " << secondSmallest << endl; 
    }
}
int main() {
    cout << "Enter the value of n: ";
    secSmallest();
    return 0;
}