//Print the sum of 1 to n numbers
#include<bits/stdc++.h>
using namespace std;
void sum1(int n) {
    int sum = 0;
    for(int i = 1; i <= n; i++) {
    sum = sum + i; //can aslo be written as sum += i;
}
cout << sum <<endl;
}
int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    sum1(n);
    return 0;
}
