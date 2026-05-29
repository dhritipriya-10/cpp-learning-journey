//Print true or false if the values are greater than each other

#include<bits/stdc++.h>
using namespace std;
bool bigu(int a, int b) {
    if (a > b) {
        return true;
    }
    else {
        return false;
    }
}
int main() {
    cout << boolalpha;
    cout << bigu(190,200);
    return 0;
}