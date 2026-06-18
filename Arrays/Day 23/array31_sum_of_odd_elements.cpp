//Sum of Odd Elements

#include<bits/stdc++.h>
using namespace std;
void sumOfOddEle() {
    int n;
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements in the array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int sum = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 != 0) {
            sum += arr[i]; 
        }
    }
    cout << "The sum is: " << sum << endl;
}
int main() {
    cout << "Enter the value of n: ";
    sumOfOddEle();
    return 0;
}
