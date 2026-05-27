/* Pattern 3

1
12
123
1234

*/

#include<bits/stdc++.h>
using namespace std;
void pattern3(int n) {
    for(int i = 1; i <= n; i++) { //here you could do i=0. To fix the condition below we give i < n instead of i <= n
        for(int j = 1; j <= i; j++) { // here j<= i+1 would still get the output but with 0th index added suppose n = 4 na instead of starting from 1 2 3 4 5 it will start from 0 1 2 3 4 
            cout << j;
        }
        cout<<endl;
    }
}
int main() {
    int n = 4;
    pattern3(n);
    return 0;
}