#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int r = 1; r <= N; r++) {
        for (int c = 1; c <= N; c++) {
            if (r * c == N) {
                ...
            }
        }
    }
}
