#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

int main()
{
    srand(time(NULL));
    int tam = (rand() % 10) + 1;
    int vA[tam];
    int vB[tam];
    int vSoma[tam];

    for(int i = 0; i < tam; i++)
    {
        vA[i] = (rand()%20)+1;
        vB[i] = (rand()%20)+1;
        vSoma[i] = vA[i] + vB[i];
    }

    cout << "Vetor Soma" << endl;
    for(int i = 0; i < tam; i++)
    {
        cout << vA[i] << " + " << vB[i] << " = " << vSoma[i] << endl;
    }
}
