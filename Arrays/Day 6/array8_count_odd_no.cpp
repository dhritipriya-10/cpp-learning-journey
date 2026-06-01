//Count the no. of odd elements in an array

#include<bits/stdc++.h>
using namespace std;
void odd(int n) {
    int arr[5];
    int count = 0;
    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
        if(arr[i] % 2 != 0) {
            count++;
        }
    }
    cout << count;
}
int main() {
    cout << "Enter the values: ";
    odd(5);
    return 0;
}