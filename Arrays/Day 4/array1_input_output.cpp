//Print the input output of an array

#include<bits/stdc++.h>
using namespace std;
void arry() {
int arr[5];
for(int i = 0; i < 5; i++) {
    cin >> arr[i];
}
for(int i = 0; i < 5; i++) {
    cout << arr[i] << endl;  //if you only want to return a single value then don't use loop just cout << arr[3]; 

}
}
int main() {
    cout << "Enter the values:  ";
    arry();
    return 0;
}