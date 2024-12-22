#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "lorem ipsum dolor sit amet platea sapien eu. primis suscipit dapibus tellus adipiscing dolor eu erat. sollicitudin ac eros accumsan duis ullamcorper hac odio imperdiet.";

    int total_vokal = 0;

    for (int i = 0; i < s.size(); i++) {
        char c = s[i];
        if (...) {
            total_vokal++;
        }
    }

    cout << total_vokal << endl;
}
