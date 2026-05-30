//Print the largest element in the array

#include<bits/stdc++.h>
using namespace std;
void lar() {
    int arr[5]; 
    for(int i = 0; i < 5; i++) { 
    cin >> arr[i]; //Input loop
    }
    int largest = arr[0]; //
    for(int i = 0; i < 5; i++) {
        if(arr[i] > largest) { //Comparision loop
            largest = arr[i];
        }
    }
    cout << largest;
}
int main() {
    cout << "Enter the values: ";
    lar();
    return 0;
}