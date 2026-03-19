#include <iostream>
using namespace std;

int main() {
    int n1, n2, n3;
    int x = 0, y = 0, i = 0; // inicializando

    x += 3;
    x *= y + i;
    y = i++;
    y = ++i;

    cout << "Entre com um numero inteiro: ";
    cin >> n1;

    n1 += n1 * 10;
    n2 = n1 / 5;
    n3 = n2 % 5 * 7;
    n2 *= n3-- % 4;

    cout << "\n--- RESULTADOS ---\n";
    cout << "n1: " << n1 << endl;
    cout << "n2: " << n2 << endl;
    cout << "n3: " << n3 << endl;
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
    cout << "i: " << i << endl;

    cout << "\nExpressao final: " << (n2 != n3 + 21) << endl;

    return 0;
}