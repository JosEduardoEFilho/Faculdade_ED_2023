#include <iostream>
#include <locale>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_ALL,"portuguese");

    string nome;
    float sal_fnc = 0;
    float sal_final = 0;
    float vlr_reajuste = 0;

    cout << "Informe o nome do funcion�rio: " << endl;
    cin >> nome;

    cout << "Informe o sal�rio do funcion�rio: " << endl;
    cout << "R$";
    cin >> sal_fnc;

    cout << endl;

    if (sal_fnc < 1000)
    {
        sal_final = (sal_fnc + (sal_fnc * 0.15));
        vlr_reajuste = (sal_final - sal_fnc);
        cout << "Funcion�rio: " << nome << endl;
        cout << "Sal�rio Final: R$" << sal_final << endl;
        cout << "Reajuste: R$" << vlr_reajuste << endl;
    }
    else if ((sal_fnc >= 1000)&&(sal_fnc <= 1500))
    {
        sal_final = (sal_fnc + (sal_fnc * 0.1));
        vlr_reajuste = (sal_final - sal_fnc);
        cout << "Funcion�rio: " << nome << endl;
        cout << "Sal�rio Final: R$" << sal_final << endl;
        cout << "Reajuste: R$" << vlr_reajuste << endl;
    }
    else
    {
        sal_final = (sal_fnc + (sal_fnc * 0.05));
        vlr_reajuste = (sal_final - sal_fnc);
        cout << "Funcion�rio: " << nome << endl;
        cout << "Sal�rio Final: R$" << sal_final << endl;
        cout << "Reajuste: R$" << vlr_reajuste << endl;
    }
}
