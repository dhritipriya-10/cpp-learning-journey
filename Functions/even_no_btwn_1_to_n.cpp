//To print the count of even numbers between 1 to n
#include<bits/stdc++.h>
using namespace std;
void pt1(int n) {
    int count = 0;
    for(int i = 2; i <= n; i+=2) {
        count++;
    }
    cout << count;
}
int main() {
    int n;
    cout << "Enter the number to count: ";
    cin >> n;
    pt1(n);
    return 0;
}