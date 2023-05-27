#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue <string> pessoas;

    pessoas.push("Rodrigo"); //push inicia elementos na fila
    pessoas.push("Andre");
    pessoas.push("Maria");
    pessoas.push("Jose");
    pessoas.push("Rita");

   //size mostra o tamanho da fila
   cout << "Tamanho da Fila: " << pessoas.size() << endl;
   cout << "Primeira Pessoa: " << pessoas.front() << endl;
   cout << "Ultima Pessoa: " << pessoas.back() << endl << endl;

   while(!pessoas.empty())
   {
       cout << "Primeira pessoa: " << pessoas.front() << endl;
       pessoas.pop(); //retira elementos da fila

       if(pessoas.empty())
       {
           cout << "Fila Vazia!" << endl;
       }
   }
}
