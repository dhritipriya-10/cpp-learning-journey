/* Pattern 2
* 
* * 
* * * 
* * * * 
* * * * *
*/

#include<bits/stdc++.h>
using namespace std;
void pattern2() {
    for(int i = 0; i <=4; i++) { //can also be written as for(int i=1; i<=4; i++) {
        for(int j = 1; j <= i+1; j++) { //for(j=1; j<i; j++)
            cout << "* " ;
        }
        cout<<endl;
    }
}
int main() {
    pattern2();
    return 0;
    }
