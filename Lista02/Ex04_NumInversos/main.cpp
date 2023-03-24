#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;
void Preenche(int vetorA[20]);
void Mostra(int vetorA[20]);

int main()
{
    int vetorA[20];

    srand(time(NULL));
    Preenche(vetorA);
    Mostra(vetorA);
}

void Preenche(int vetorA[20])
{
    for(int i = 0; i < 20; i++)
    {
        vetorA[i] = (rand() % 10)+1;
    }
}

void Mostra(int vetorA[20])
{
    cout << "Vetor Origem" << endl;
    for(int i = 0; i < 20; i++)
    {
        cout << vetorA[i] << " << ";
    }

    cout << endl;
    cout << endl;

    cout << "Vetor Inverso" << endl;
    for(int i = 19; i >= 0; i--)
    {
        cout << vetorA[i] << " << ";
    }
}
