//Print the elements in reverse order

#include<bits/stdc++.h>
using namespace std;
void rev() {
    int arr[5];
    for(int i = 0; i < 5; i++ ) {
    cin >> arr[i];
    }
    for(int i = 4; i >= 0; i--) {
        cout << arr[i] << endl;
    }
}
int main() {
    cout<<"Enter the values: ";
    rev();
    return 0;
}