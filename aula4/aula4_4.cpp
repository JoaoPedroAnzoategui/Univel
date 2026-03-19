#include <iostream>
using namespace std;

int main() {
    int k = 10, j = 10;

    cout << "antes do pré fixado: " << k << endl;
    cout << "durante do pré fixado: " << ++k << endl;
    cout << "depois do pré fixado: " << k << endl;

    cout << "antes do pós fixado: " << j << endl;
    cout << "durante do pós fixado: " << j++ << " primeiro imprime o valor depois soma" << endl;
    cout << "depois do pós fixado: " << j << endl;
    return 0;

}