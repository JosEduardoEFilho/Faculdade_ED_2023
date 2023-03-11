#include <iostream>

using namespace std;

int obtem_valor()
{
    int valor;
    cout << "Entre um valor: ";
    cin >> valor;
    return valor;
}

int main()
{
    int a, b;
    a = obtem_valor();
    b = obtem_valor();
    cout << "Soma = " << a + b << endl;
}
