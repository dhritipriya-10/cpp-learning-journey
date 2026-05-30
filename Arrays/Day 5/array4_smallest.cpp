//Print the smallest element in the array

#include<bits/stdc++.h>
using namespace std;
void ari() {
    int arr[5];
    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    int smallest = arr[0];
    for(int i = 0; i < 5; i++) {
    if(arr[i] < smallest) {
        smallest = arr[i];
    }
}
cout << smallest;
}
int main() {
    cout << "Enter the values: ";
    ari();
    return 0;
}