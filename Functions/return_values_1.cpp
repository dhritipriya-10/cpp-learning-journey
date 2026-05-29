//Print which value is greater

#include<bits/stdc++.h>
using namespace std;
int bigger(int a, int b) {
    if(a > b) {
        return a;
    }
    else {
        return b;
    }
}
int main() {
    cout << bigger(120,30);
    return 0;
}