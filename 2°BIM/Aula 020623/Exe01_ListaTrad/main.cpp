#include <iostream>

using namespace std;

//Defini��o de estrutura do n� da lista encadeada
struct Node
{
    int dado; //Dado do n�
    Node* proximo; //ponteiro para o proximo n�
};

//Fun��o para criar um novo n� com o dado fornecido
Node* criarNo(int dado)
{
    Node* novoNo = new Node;
    novoNo->dado = dado;
    novoNo->proximo = nullptr;
    return novoNo;
}

//Fun��o para iserir um novo n� no inicio da lista
void inserirNoInicio(Node** cabeca, int dado)
{
    //Criar um novo n�
    Node* novoNo = criarNo(dado);

    //define o proximo do novo n� como o n� atual no inicio da lista
    novoNo->proximo = *cabeca;

    //Atualiza o ponteiro para o novo n� como o novo n� no inicio da lista
    *cabeca = novoNo;
}

//Funcao para remover um no com o dado fornecido da lista
void removerNo(Node** cabeca, int dado)
{
    //Verifica se a lista est� vazia
    if(*cabeca == nullptr)
    {
        cout << "Lista vazia. Nenhum no removido" << endl;
        return;
    }

    //Verifica se o primeiro no cont�m o dado a ser removido
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

//Fun��o para imprimir os elementos da lista
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

    //Inser��o de elementos na lista
    inserirNoInicio(&cabeca, 10);
    inserirNoInicio(&cabeca, 20);
    inserirNoInicio(&cabeca, 30);

    //Imprime os elementos da lista
    imprimirLista(cabeca);

    //Remove um n� da lista
    removerNo(&cabeca, 20);

    //Imprime os elementos atualizados da lista
    imprimirLista(cabeca);
}
