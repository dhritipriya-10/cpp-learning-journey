//Find the sum of 5 array elements entered by the user.

#include<bits/stdc++.h>
using namespace std;
void summ() {
    int arr[5];
    int sum = 0;
    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    for(int i = 0; i < 5; i++) {
        sum = sum + arr[i];
        cout << arr[i] << endl; //This line is not necessary. Without it also you would get the output.
    }
    cout << "The sum is = " << sum;
}
int main() {
    cout << "Enter the values: ";
    summ();
    return 0;
}