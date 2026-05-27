/* Pattern 4

1234
123
12
1

*/

#include<bits/stdc++.h>
using namespace std;
void p4(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n-i+1; j++) {
            cout << j;
        }
        cout << endl;
    }
}
int main() {
    int n = 4;
    p4(n);
    return 0;
}


//or


/*
#include<bits/stdc++.h>
using namespace std;
void pt() {
    for(int i = 1; i <= 4; i++) {
        for(int j = 1; j <= 4-i+1; j++) {
            cout << j;
        } 
        cout << endl;
    }
}
int main() {
    p4();
    return 0;
}
*/