//Searching elements in an array.

#include<bits/stdc++.h>
using namespace std;
void arr() {
    int arr[5];
    bool found = false;
    int num;
    cin >> num;
    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    for(int i = 0; i < 5; i++) {
        if(arr[i] == num) {
            found = true;
        }
    }
        if(found) {
            cout << "found";
        }
        else {
            cout << "Not found";
        }
    }

int main() {
    cout << "Enter the value that you want to find: ";
    arr();
    return 0;
}

/*
Ask:
What number do you want to find?
↓
Store in num
↓
Take array inputs
↓
Search the array
↓
Print Found / Not Found
*/