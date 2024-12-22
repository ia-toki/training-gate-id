#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int jumlah = 0;
    for (int i = 1; i <= N; i++) {
        int x;
        cin >> x;
        jumlah += x;
    }

    cout << jumlah << endl;
}