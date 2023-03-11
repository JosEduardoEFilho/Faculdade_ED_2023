#include <iostream>

using namespace std;

void mensagem(int n)
{
    cout << "Numero: " << n << endl;
}

void mensagem()
{
    cout << "Exemplo de sobre carga de funcao" << endl;
}

int main()
{
    mensagem();
    mensagem(10);
}
