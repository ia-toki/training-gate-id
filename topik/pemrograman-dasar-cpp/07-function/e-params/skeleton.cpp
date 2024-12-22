#include <iostream>
using namespace std;

int jantan[4] = {0, 10, 50, 60};
int betina[4] = {7, 80, 9, 40};

int selisih(int a, int b) {
    if (a > b) {
        return ...;
    } else {
        return ...;
    }
}

int denda_pada_hari(int hari) {
    return ... * selisih(..., ...);
}

int total_denda() {
    int total = 0;
    for (int i = 0; i < 4; i++) {
        total += denda_pada_hari(...);
    }
    return total;
}

int main() {
    cout << total_denda() << endl;
}
