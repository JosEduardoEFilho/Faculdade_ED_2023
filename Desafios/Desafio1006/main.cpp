#include <iostream>
#include <cstdlib>
#include <locale>
using namespace std;

int main()
{
    setlocale(LC_ALL,"portuguese");
    float nota01, nota02, nota03, media;
    unsigned short opc;

    do
    {
        system("CLS||CLEAR");
        cout << "Calculo media ponderada" << endl;
        cout << endl;

        cout << "Digite a primeira nota: ";
        cin >> nota01;
        cout << endl;

        cout << "Digite a segunda nota: ";
        cin >> nota02;
        cout << endl;

        cout << "Digite a terceira nota: ";
        cin >> nota03;
        cout << endl;

        media = (((nota01*2) + (nota02*3) + (nota03*5))/(10));

        cout << "MEDIA: " << media;

        cout << endl;
        cout << "Deseja calcular novamente?" << endl;
        cout << "(1) - SIM" << endl;
        cout << "(2) - NÃO" << endl;
        cin >> opc;
    }
    while(opc != 2);


}
