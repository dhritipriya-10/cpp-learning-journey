//Count even numbers in an array

#include<bits/stdc++.h>
using namespace std;
void ary() {
    int count = 0;
    int arr[5];
    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
        if(arr[i] % 2 == 0) {
            count++;
        }
    }
    cout << count;
}
int main() {
    cout<< "Enter the values: ";
    ary();
    return 0;
}

/*
count = 0
↓
Loop through array
    ↓
    Take input
    ↓
    Check even
    ↓
    count++
↓
After loop
↓
Print count
*/