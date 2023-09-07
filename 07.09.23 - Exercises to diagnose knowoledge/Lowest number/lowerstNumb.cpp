#include <iostream>

using namespace std;

int main() {
    int numb[3];
    for (int i = 0; i < 3; ++i) {
        cout << "Podaj " << i+1 << ". liczbe\n";
        cin >> numb[i];
    }
    if (numb[0] <= numb[1] && numb[0] <= numb[2]) {
        cout << "Pierwsza podana liczba jest najniejsza";
    } else if (numb[1] <= numb[0] && numb[1] <= numb[2]) {
        cout << "Druga podana liczba jest najniejsza";
    } else  {
        cout << "Trzecia podana liczba jest najniejsza";
    }
    return 0;
}