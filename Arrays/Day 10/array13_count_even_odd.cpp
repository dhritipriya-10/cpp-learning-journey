//Count the even and odd elements in an array.

#include<bits/stdc++.h>
using namespace std;
void counEvenOdd() {
    int n;
    cin >> n;
    int arr[n];
    int even = 0;
    int odd = 0;
    cout << "Enter the elements in the array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            even++;
        }
        else if(arr[i] % 2 != 0) { //Can simply be written as else { odd++ }
            odd++;
        }
    }
    cout << "Even = " << even << endl;
    cout << "Odd = " << odd << endl; 
}
int main() {
    cout << "Enter the value of n: ";
    counEvenOdd();
    return 0;
}

/*
1. Input n
2. Create array
3. Input array elements
4. even = 0, odd = 0
5. Traverse array
6. Count even/odd
7. Print counts
*/