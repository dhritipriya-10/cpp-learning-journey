#include <bits/stdc++.h>
using namespace std;
void searchNegPos() {
    int n;
    cin >> n;
    int arr[n];
    int positive = 0; 
    int negative = 0;
    cout << "Enter the array elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++) {
        if(arr[i] > 0) {
            positive++;
        }
        else if(arr[i] < 0) {
            negative++;
        }
    }
    cout << "Postive = " << positive << endl;
    cout << "Negative = " << negative << endl;
}
int main() {
    cout << "Enter the value of n: ";
    searchNegPos();
    return 0;
}