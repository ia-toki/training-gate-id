#include <iostream>
using namespace std;

int main() {
    int total_bebek = 67 + 98;

    if (total_bebek % 13 == 0) {
        cout << 13 << endl;
    }
    if (total_bebek % 11 == 0) {
        cout << 11 << endl;
    }
    if (total_bebek % 5 == 0) {
        cout << 5 << endl;
    }
    if (total_bebek % 3 == 0) {
        cout << 3 << endl;
    } else {
        cout << 1 << endl;
    }
}
