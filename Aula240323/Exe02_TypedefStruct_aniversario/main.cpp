#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

typedef struct
{
    /*Para declarar que um numero seja apenas positivo(incluindo 0), usamos o modificador unsigned: */

    unsigned short dia;
    unsigned short mes;
    unsigned int ano;

}Data;

typedef struct
{
  string nome;
  Data nascimento;

}Aniversario;

int main()
{
    Aniversario alguem;
    cout << "Digite o nome de alguem: " << endl;
    getline(cin, alguem.nome);
    cout << "Digite o dia que esta pessoa nasceu: " << endl;
    cin >> alguem.nascimento.dia;
    cout << "Digite o mes que essa pessoa nasceu: " << endl;
    cin >> alguem.nascimento.mes;
    cout << "Digite o ano que esta pessoa nasceu: " << endl;
    cin >> alguem.nascimento.ano;
    system("CLS||CLEAR");

    cout << alguem.nome << endl;
    cout << "Nasceu em ";
    cout << alguem.nascimento.dia << "/";
    cout << alguem.nascimento.mes << "/";
    cout << alguem.nascimento.ano << endl;

    system("pause");
}
