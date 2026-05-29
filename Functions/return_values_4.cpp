//Print the value of square

#include<bits/stdc++.h>
using namespace std;
int square(int n) {
    return n * n;
}
int main() {
    int n; 
    cout << "Enter the value: ";
    cin >> n;
    cout << square(n);
    return 0;
}