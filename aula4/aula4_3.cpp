#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string nome = "João";
    string letra = "a";
    string sobrenome = "Anzoategui";

    cout << "meu nome é: " << nome << endl;
    cout << "nome completo: " << (nome.append(sobrenome)) << endl;
    cout << "tamanho " << (nome.length()) << endl;
    cout<<"\nPrimeira letra do nome: " <<nome[0];
    cout << "meu nome agora é : " << nome << endl;

    return 0;

}