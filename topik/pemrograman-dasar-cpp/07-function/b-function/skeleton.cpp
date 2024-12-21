#include <iostream>
using namespace std;

int biaya(...) {
    ...
}

int main() {
    int jantan[4] = {0, 10, 50, 60};
    int betina[4] = {7, 80, 9, 40};

    for (int i = 0; i < 4; i++) {
        int biaya_jantan = biaya(...);
        int biaya_betina = biaya(...);

        cout << biaya_jantan + biaya_betina << endl;
    }
}
