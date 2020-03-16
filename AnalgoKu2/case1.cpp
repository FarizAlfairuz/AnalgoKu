#include<iostream>
using namespace std;

main(){
    int i, x, max;
    float arr[255];

    cout << "Max array : "; cin >> x;
    cout << "Input data: \n";

    for (i = 0; i < x; i++) {
        cin >> arr[i];
    }
    i = 0;
    max = arr[0];
    while (i <= x) {
        if (arr[i] > max) {
            max = arr[i];
        }
        i = i + 1;
    }
    cout << max;
}