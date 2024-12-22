#include <iostream>
#include <string>
using namespace std;

string biner(int n) {
    if (n == 0) {
        return "0";
    }
    if (n == 1) {
        return "1";
    }
    if (n % 2) {
        return biner(n/2) + "1";
    } else {
        return biner(n/2) + "0";
    }
}

// Fungsi main di bawah tidak boleh diubah!
int main() {
    cout << biner(0) << endl;
    cout << biner(1) << endl;
    cout << biner(512) << endl;
    cout << biner(1697) << endl;
    cout << biner(1048575) << endl;
}
