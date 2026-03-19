#include <iostream>
using namespace std;

int main() {
     int n1, n2, n3, x, y, i;
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
     cout << n2 << " " << n3 << " " << (n2 != n3 + 21) << endl;

     return 0;
}