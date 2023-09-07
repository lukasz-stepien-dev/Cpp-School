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

bool isRightTriangle(int a, int b, int c) {
    if (a > b && a > c) {
        return (b * b) + (c * c) == (a * a);
    } else if (b > a && b > c) {
        return (a * a) + (c * c) == (b * b);
    } else {
        return (a * a) + (b * b) == (c * c);
    }
}



int main() {
    int a, b, c;
    cout << "Podaj boki trojkata po spacji (a b c)\n";
    cin >> a >> b >> c;

    if (isTriangle(a, b, c)) {
        cout << "Z podanyhc dlugosci mozna zbudowac trojkat\n";
        if (a == b && b == c) {
            cout << "Z podanych dlugosci mozna zbudowac trojkat rownoboczny";
        } else if (a == b || a == c || b == c) {
            cout << "Z podanych dlugosci mozna zbudowac trojkat rownoramienny";
        } else if (isRightTriangle(a, b, c)) {
            cout << "Z podanych dlugosci mozna zbudowac trojkat prostokatny";
        } else {
            cout << "Z podanych dlugosci mozna zbudowac trojkat rownoboczny";
        }
    } else {
        cout << "Z bokow o dlugosci: " << a << ", " << b << " i " << c << " nie mozna zbudowac trojkata\n";
    }
}