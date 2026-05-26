//To print numbers from 1 to n
#include<iostream>
using namespace std;
void pblm1(int n) {
    for(int i = 1; i <= n; i++) {
        cout << i << endl;
    }
    cout<<endl;
}
int main() {
    int n = 50; //assigning value of n
    pblm1(n);
    return 0;
}