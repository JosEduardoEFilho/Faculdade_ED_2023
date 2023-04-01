#include <iostream>
#include <iomanip>
#include <math.h>
#include <cstdlib>

using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");

    float a = 0.0, b = 0.0,c = 0.0;
    float delta = 0.0;
    float x1 = 0.0, x2 = 0.0;
    int opc;

    do
    {
        system("CLEAR||CLS");
        cout << "Calculador de Formulade Bhaskara" << endl;
        cout << endl;
        cout << "Calculo de DELTA" << endl;
        cout << endl;

        cout << "Informe o valor para A: ";
        cin >> a;

        cout << "Informe o valor para B: ";
        cin >> b;

        cout << "Informe o valor para C: ";
        cin >> c;

        delta = pow(b,2) - (4*a*c);

        system("CLEAR||CLS");

        if((delta <= 0) || (a == 0))
        {
            cout << "Calculo não possui valor real";
        }
        else
        {
            x1 = (((b*-1) + sqrt(delta))/(2*a));
            x2 = (((b*-1) - sqrt(delta))/(2*a));

            cout << "R1 = " << x1 << endl;
            cout << "R2 = " << x2 << endl;
        }

        cin.ignore();
        cout << endl;
        cout << "Deseja calcular novamente?" << endl;
        cout << "(1) - SIM" << endl;
        cout << "(2) - NÃO" << endl;
        cin >> opc;
        cin.ignore();
    }
    while(opc != 2);
}
