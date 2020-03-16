#include<iostream>
using namespace std;

main() {
    int data[255], i, n, x, y;
    bool found;

    cout << "Max array : "; cin >> n;
    cout << "Input data: \n";
    found = false;
    for (i = 0; i < n; i++) {
        cin >> data[i];
    }
    cout << "Data:\n";
    for (i = 0; i < n; i++) {
        cout << data[i] << " ";
    }
    i = 0;
    cout << endl;
    cout << "Find: "; cin >> x;
    while (i <= n && found == false) {
        if (x == data[i]) {
            found = true;
            break;
        }
        i = i + 1;
    }
    if (found == true) {
        cout << "Data ditemukan pada index-" << i << endl;
    } else {
        cout << "Data tidak ditemukan" << endl;
    }
}
