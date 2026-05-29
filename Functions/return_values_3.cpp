//Print true if the number is even or else print false.

#include<bits/stdc++.h>
using namespace std;
bool isEven(int n) {
    if(n%2 == 0) {    //instead of writing this whole if else block of code you can just use 'return n % 2 == 0'. It would give the same output
        return true;
    }
    else {
        return false;
    }
}
int main () {
    cout << boolalpha << isEven(21) << endl;
    cout << boolalpha << isEven(19);
    return 0;
}

//or

//Take input from the user

#include<bits/stdc++.h>
using namespace std;
bool isEven(int n) {
    return n % 2 == 0;
    }
int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << boolalpha << isEven(n);
    return 0;
}