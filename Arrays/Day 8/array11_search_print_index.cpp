#include<bits/stdc++.h>
using namespace std;
void hehe() {
    int arr[5];
    int target;
    bool found = false;
    cout << "Enter the elements in the array: ";
    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    cout << "Enter the target value: ";
    cin >> target;
    for(int i = 0; i < 5; i++) {
        if(arr[i] == target) {        
            found = true;
            cout << "Element found at index ";
            cout << i;
            break;
        }
    }
    if(found == false) {
        cout << "Element not found.";
    }
    }

int main() {
    hehe();
    return 0;
}

/*
1. Take array input
2. Take target input
3. found = false
4. Loop through array
5. If element found:
      found = true
      print index
6. After loop:
      if(found == false)
      print "Element Not Found"
*/