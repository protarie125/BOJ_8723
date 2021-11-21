#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int a, b, c;
    cin >> a >> b >> c;

    if (a == b && b == c) {
        cout << 2;
    }
    else {
        auto check1 = (c * c + b * b == a * a);
        auto check2 = (a * a + c * c == b * b);
        auto check3 = (a * a + b * b == c * c);

        if (check1 || check2 || check3) {
            cout << 1;
        }
        else {
            cout << 0;
        }
    }

    return 0;
}