#include <iostream>

using namespace std;

bool isTriangle(int a, int b, int c) {
    if (a >= b && a >= c) {
        return b + c > a;
    } else if (b >= a && b >= c) {
        return a + c > b;
    } else {
        return a + b > c;
    }
}

int main() {
    int a, b, c;
    cout << "Podaj boki trojkata po spacji (a b c)\n";
    cin >> a >> b >> c;

    // Is Triangle?
    if (isTriangle(a, b, c)) {

    } else {
    }
}