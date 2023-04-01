#include <iostream>
#include <cstdlib>
#include <locale>
#include <iomanip>

using namespace std;

int main()
{
    setlocale(LC_ALL,"portuguese");
    cout << fixed << setprecision(2);

    string vendedor;
    float salario;
    float vendas;
    float comissao;
    float vlr_total;
    int opc;

    do
    {
        system("Clear||CLS");
        cout << "Calcula Comissão" << endl;
        cout << endl;
        cout << "Digite o nome do vendedor: ";
        getline(cin, vendedor);

        cout << "Salário fixo: R$";
        cin >> salario;

        cout << "Total vendido: R$";
        cin >> vendas;
        system("CLS||CLEAR");

        vlr_total = (salario + (vendas*0.15));

        cout << "Dados do Vendedor" << endl;
        cout << endl;
        cout << "Vendedor: " << vendedor << endl;
        cout << "Total: R$" << vlr_total << endl;


        cout << endl;
        cout << "Deseja calcular novamente?" << endl;
        cout << "(1) - SIM" << endl;
        cout << "(2) - NÃO" << endl;
        cin >> opc;
        cin.ignore();

    }
    while(opc != 2);

}
