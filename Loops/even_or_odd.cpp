//To find even or odd using if condition
#include<bits/stdc++.h>
using namespace std;
void pblm3(int n) {
    for(int i = 1; i <= n; i++) { //'i++' will only increment by +1 , whatif we direct jump from even no. to even no.? like 2 -> 4 -> 6...isntead of 2-> 3 -> 4 -> 5....we use 'i += 2' to increment directly by 2
        if(i % 2 == 0) {
            cout << i << endl;
        }
}
}   //made mistake here by not closing the void fn.
int main() {
    int n = 20;
    pblm3(n);
    return 0;
}
