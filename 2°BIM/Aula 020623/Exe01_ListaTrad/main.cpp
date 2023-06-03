#include <iostream>

using namespace std;

//Definição de estrutura do nó da lista encadeada
struct Node
{
    int dado; //Dado do nó
    Node* proximo; //ponteiro para o proximo nó
};

//Função para criar um novo nó com o dado fornecido
Node* criarNo(int dado)
{
    Node* novoNo = new Node;
    novoNo->dado = dado;
    novoNo->proximo = nullptr;
    return novoNo;
}

//Função para iserir um novo nó no inicio da lista
void inserirNoInicio(Node** cabeca, int dado)
{
    //Criar um novo nó
    Node* novoNo = criarNo(dado);

    //define o proximo do novo nó como o nó atual no inicio da lista
    novoNo->proximo = *cabeca;

    //Atualiza o ponteiro para o novo nó como o novo nó no inicio da lista
    *cabeca = novoNo;
}

//Funcao para remover um no com o dado fornecido da lista
void removerNo(Node** cabeca, int dado)
{
    //Verifica se a lista está vazia
    if(*cabeca == nullptr)
    {
        cout << "Lista vazia. Nenhum no removido" << endl;
        return;
    }

    //Verifica se o primeiro no contém o dado a ser removido
    if((*cabeca)->dado == dado)
    {
        Node* temp = *cabeca;
        *cabeca = (*cabeca) ->proximo;
        delete temp;
        cout << "No removido." << endl;
        return;
    }

    //Procura o no a ser removida na lista
    Node* anterior = *cabeca;
    Node* atual = (*cabeca)->proximo;
    while (atual != nullptr && atual->dado != dado)
    {
        anterior = atual;
        atual = atual->proximo;
    }

    //Se o no foi encontrado, remove-o da lista
    if(atual != nullptr)
    {
        anterior ->proximo = atual ->proximo;
        delete atual;
        cout << "No Removido" << endl;
    }
    else
    {
        cout << "No nao encontrado na lista" << endl;
    }
}

//Função para imprimir os elementos da lista
void imprimirLista(Node* cabeca)
{
    cout << "Elementos da lista: ";
    while(cabeca != nullptr)
    {
        cout << cabeca -> dado << " ";
        cabeca = cabeca ->proximo;
    }
    cout << endl;
}

//Funcao principal
int main()
{
    Node* cabeca = nullptr; //ponteiro para o primeiro no da lista

    //Inserção de elementos na lista
    inserirNoInicio(&cabeca, 10);
    inserirNoInicio(&cabeca, 20);
    inserirNoInicio(&cabeca, 30);

    //Imprime os elementos da lista
    imprimirLista(cabeca);

    //Remove um nó da lista
    removerNo(&cabeca, 20);

    //Imprime os elementos atualizados da lista
    imprimirLista(cabeca);
}
