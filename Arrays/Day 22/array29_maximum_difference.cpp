//Maximum difference

//Using 2 loops
#include<bits/stdc++.h>
using namespace std;
void maxdiff() {
    int n;
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements in the array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int largest = arr[0];
    for(int i = 0; i < n; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }
    int smallest = arr[0];
    for(int i = 0; i < n; i++) {
        if(arr[i] < smallest) {
            smallest = arr[i];
        }
    }
    int difference = largest - smallest;
    cout << "The difference is: " << difference;
}
int main() {
    cout << "Enter the value of n: ";
    maxdiff();
    return 0;
}

//OR


//The same problem by using one loop.
#include<bits/stdc++.h>
using namespace std;
void maxdiff() {
    int n;
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements in the array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int largest = arr[0];
    int smallest = arr[0];
    for(int i = 0; i < n; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
        if(arr[i] < smallest) {  //Used 'else if' earlier but works better without 'else' cuz a no. can't be both largest and smallest. Thus we use 'if' here.
            smallest = arr[i];
        }
    }
    int difference = largest - smallest;
    cout << "Difference: " << difference;
}
int main() {
    cout << "Enter the value of n: ";
    maxdiff();
    return 0;
}