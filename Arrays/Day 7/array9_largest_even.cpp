//Find the largest even number in the array and print it.

#include<bits/stdc++.h>
using namespace std;
void lar() {
    int arr[5];
    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    int largest = arr[0];
    for(int i = 0; i < 5; i++) {
        if(arr[i] % 2 == 0) {
            if(arr[i] > largest) {
                largest = arr[i];
            }
        }      
    }
    cout << largest;  
}


int main() {
    cout << "Enter the values: ";
    lar();
    return 0;
}