#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float peso = 0;
    float altura = 0;
    float IMC = 0;

    cout << "Digite o peso do paciente: " << endl;
    cin >> peso;

    cout << "Digite a altura do paciente: " << endl;
    cin >> altura;
    cout << endl;

    IMC = peso/pow(altura, 2);

    cout << "IMC = " << IMC << endl;

    if (IMC < 20)
    {
        cout << "O paciente esta abaixo do peso!" << endl;
    }
    else if((IMC >= 20) && (IMC < 25))
    {
        cout << "O paciente esta no peso ideal!" << endl;
    }
    else
    {
        cout << "O paciente esta acima do peso!" << endl;
    }
}
