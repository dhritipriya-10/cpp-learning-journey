/* Pattern 1

****
****
****
****

*/

#include<bits/stdc++.h>
using namespace std;
void pattern1() {
    for(int i = 1; i<=4; i++) { //here you can use i=0, i<4 likewise j=0, j<4 bcuz we want to print only 4 stars for both rows and column
        for(int j = 1; j<=4; j++) {
            cout << "*"; //Prints the star if you want space in your output use "* " the output will be smtg like * * * *...
        }
        cout<<endl; //prints nextline
    }
}
int main() {
    pattern1();
    return 0;
}