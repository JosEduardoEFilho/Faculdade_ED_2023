#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"portuguese");

    float horas_trab = 0;
    float sal_minimo = 1302;
    float sal_final = 0;
    float vlr_hora = 0;
    float sal_bruto = 0;
    float imposto = 0;

    cout << "Informe a quantidade de horas trabalhadas: " << endl;
    cin >> horas_trab;

    cout << "Informe o sal�rio m�nimo: " << endl;
    cin >> sal_minimo;

    vlr_hora = (sal_minimo/2);
    sal_bruto = (horas_trab * vlr_hora);
    imposto = (sal_bruto * 0.03);
    sal_final = (sal_bruto - imposto);

    cout << "Horas Trabalhadas: " << horas_trab << endl;
    cout << "Sal�rio Min�mo: R$" << sal_minimo << endl;
    cout << "Valor da hora: R$" << vlr_hora << endl;
    cout << "Sal�rio Bruto: R$" << sal_bruto << endl;
    cout << "Valor do imposto: R$" << imposto << endl;
    cout << "Sal�rio a receber: R$" << sal_final << endl;



}
