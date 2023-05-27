#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int valor;
    stack<int> num;

    cout << "Digite um numero: (Pressione 0 para sair)" << endl;

    do
    {
        cin >> valor;
        if (valor != 0)
        {
            num.push(valor);
        }
    }
    while(valor != 0);

    cout << endl;
    cout << "Numeros na ordem inversa: ";
    do
    {
        cout << num.top() << " ";
        num.pop();
    }
    while(!num.empty());
}
