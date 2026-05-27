/* Pattern 6

1
22
333
4444

*/
#include<bits/stdc++.h>
using namespace std;
void p6(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << i << " ";
        }
         cout<<endl;
    }
}
int main() {
    int n = 4;
    p6(n);
    return 0;
}