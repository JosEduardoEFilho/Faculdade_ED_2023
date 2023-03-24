#include <iostream>
#include <time.h>
#include <cstdlib>
#include <locale>
#include <iomanip>

using namespace std;

int main()
{

    /*A fins para facilitar testes foi gerado as temperaturas de forma aleatoria e apenas para 7 dias!*/
    setlocale(LC_ALL,"portuguese");
    cout << fixed << setprecision(2);

    float vTemp[7];
    float media = 0.00;
    float MaiorTemp = 0.00;
    float MenorTemp = 100.00;
    int conta = 0;

    srand(time(NULL));

    for(int i = 0; i < 7; i++)
    {
        vTemp[i] = (rand()% 50) + 1;
    }

    for(int i = 0; i < 7; i++)
    {
        if(vTemp[i] > MaiorTemp)
        {
            MaiorTemp = vTemp[i];
        }
        else
        if(vTemp[i] < MenorTemp)
        {
            MenorTemp = vTemp[i];
        }

        media = media + vTemp[i];
    }

    cout << "Temperaturas dos dias" << endl;
    for(int i = 0; i < 7; i++)
    {
        if(vTemp[i] < (media/7))
        {
            conta++;
        }
        cout << vTemp[i] << endl;
    }

    cout << endl;
    cout << "Maior temperatura do ano: " << MaiorTemp << "°" << endl;
    cout << "Menor temperatura do ano: " << MenorTemp << "°" << endl;
    cout << "Temperatura media anual: " << media/7 << "°" << endl;
    cout << "Quantidade de dias abaixo da media: " << conta << endl;
    cout << endl;
    cout << " /*A fins para facilitar testes foi gerado as temperaturas de forma aleatoria e apenas para 7 dias!*/" << endl;
}
