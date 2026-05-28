// Print numbers from 1 to n

include<bits/stdc++.h>
using namespace std;
void prin(int n) {
    for(int i = 1; i <= n; i++) {
        cout << i << endl;
        
    }
    cout << endl;
}

int main() { 
    int n;
    cout << "Enter a number: ";
    cin >> n;
    prin(n);
    return 0;
}