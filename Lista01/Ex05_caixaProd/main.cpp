#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"portuguese");

    float PrecoEtiq, PrecoFinal, vlr_mes = 0;
    int CodPgto = 0;


    cout << "Digite o pre�o do produto: " << endl;
    cout << "R$";
    cin >> PrecoEtiq;

    cout << "Escolha a condi��o de pagamento: " << endl;
    cout << "(1) - � vista em dinheiro/cheque" << endl;
    cout << "(2) - � vista com cart�o de cr�dito" << endl;
    cout << "(3) - Dividir em 2x" << endl;
    cout << "(4) - Dividir em 3x" << endl;
    cout << "*------------------------------------*" << endl;
    cout << "PRESSIONE OUTRA TECLA PARA CANCELAR A VENDA!" << endl;
    cin >> CodPgto;

    cout << endl;

    switch(CodPgto)
    {
    case 1:
        PrecoFinal = (PrecoEtiq - (PrecoEtiq * 0.1));
        cout << "Pagamento: � vista!" << endl;
        cout << "Valor Final: R$" << PrecoFinal << endl;
        break;
    case 2:
        PrecoFinal = (PrecoEtiq - (PrecoEtiq * 0.05));
        cout << "Pagamento: Cart�o de cr�dito!" << endl;
        cout << "Valor Final: R$" << PrecoFinal << endl;
        break;
    case 3:
        vlr_mes = PrecoEtiq/2;
        cout << "Pagamento: Parcelado em 2x!" << endl;
        cout << "Valor Final: R$" << PrecoEtiq << endl;
        cout << "Valor da parcela: R$" << vlr_mes << endl;
        break;
    case 4:
        PrecoFinal = (PrecoEtiq + (PrecoEtiq *0.1));
        vlr_mes = PrecoFinal/3;
        cout << "Pagamento: Parcelado en 3x!" << endl;
        cout << "Valor Final: R$" << PrecoFinal << endl;
        cout << "Valor da parcela: R$" << vlr_mes << endl;
        break;
    default:
        cout << "Fim do Programa!!!" << endl;
        break;
    }

}
