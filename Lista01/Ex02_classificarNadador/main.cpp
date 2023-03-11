#include <iostream>

using namespace std;

int main()
{
    int idade = 0;

    cout << "Informe a idade do participante: " << endl;
    cin >> idade;

    if ((idade >= 5) && (idade <= 7))
    {
        cout << "Idade: " << idade << endl;
        cout << "Nadador de categoria: INFANTIL A!" << endl;
    }
    else if ((idade <= 10))
    {
        cout << "Idade: " << idade << endl;
        cout << "Nadador de categoria: INFANTIL B!" << endl;
    }
    else if ((idade <= 13))
    {
        cout << "Idade: " << idade << endl;
        cout << "Nadador de categoria: JUVENIL A!" << endl;
    }
    else if ((idade <= 17))
    {
        cout << "Idade: " << idade << endl;
        cout << "Nadador de categoria: JUVENIL B!" << endl;
    }
    else
    {
        cout << "Idade: " << idade << endl;
        cout << "Nadador de categoria: Senior!" << endl;
    }
}
