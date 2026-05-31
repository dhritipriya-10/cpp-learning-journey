#include<bits/stdc++.h>
using namespace std;
void avg() {
    int sum = 0;
    int arr[5];
    int average;
    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
        sum = sum + arr[i];
    }
    average = sum / 5;
    cout << average;
}
int main() {
    cout << "Enter the values: ";
    avg();
    return 0;
}