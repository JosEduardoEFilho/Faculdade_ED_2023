#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"portuguese");
    int op;
    float cand1 = 0.0,cand2 = 0.0,nulo = 0.0,branco = 0.0,total = 0.0;
    float percent = 0.0;

    do
    {
        cout << "Escolha um candidato:" << endl;
        cout << "(1) - José" << endl;
        cout << "(2) - Daniela" << endl;
        cout << "(3) - Nulo" << endl;
        cout << "(4) - Voto Branco" << endl;
        cin >> op;

        switch(op)
        {
        case 1:
            cand1++;
            total++;
            break;
        case 2:
            cand2++;
            total++;
            break;
        case 3:
            nulo++;
            total++;
            break;
        case 4:
            branco++;
            total++;
            break;
        default:
            break;
        }
    }
    while(op != 0);

    percent = ((cand1/total)*100);
    cout << "José: " << percent << "%" << endl;
    percent = ((cand2/total)*100);
    cout << "Daniela: " << percent << "%" << endl;
    percent = ((nulo/total)*100);
    cout << "Nulo: " << percent << "%" << endl;
    percent = ((branco/total)*100);
    cout << "Branco: " << percent << "%" << endl;
    cout << "Total: " << total << endl;

}
