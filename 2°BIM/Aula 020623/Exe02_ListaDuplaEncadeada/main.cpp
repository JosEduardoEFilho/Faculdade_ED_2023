#include <iostream>

using namespace std;

//Defini��o da estrutura do n� da lista duplamente encadeada
struct Node
{
    int dado; //Dado do n�
    Node* anterior; //ponteiro para o n� anterior
    Node* proximo; //ponteiro para o proximo n�
};

//Fun��o para criar um novo no com o dado fornecido
Node* criarNo(int dado)
{
    Node* novoNo = new Node;
    novoNo->dado = dado;
    novoNo->anterior = nullptr;
    novoNo->proximo = nullptr;
    return novoNo;
}

//Fun��o para inserir um novo n� no inicio da lista
void inserirNoInicio(Node** cabeca, int dado)
{
    //Criar um novo n�
    Node* novoNo = criarNo(dado);

    //atualizar os ponteiros do novo n� e do n� atual no inicio da lista
    novoNo->proximo = *cabeca;
    if(*cabeca != nullptr)
    {
        (*cabeca)->anterior = novoNo;
    }

    //atualiza o ponteiro para o novo n� como o novo n� no inicio da lista
    *cabeca = novoNo;
}

//Fun��o para remover um n� com o dado fornecido da lista
void removerNo(Node** cabeca, int dado)
{
    //Verificar se a lista est� vazia
    if(*cabeca == nullptr)
    {
        cout << "Lista vazia. Nenhum no removido" << endl;
    }

    //Verifica se o primeiro no contem o dado a ser removido
    if((*cabeca)->dado == dado)
    {
        Node* temp = *cabeca;
        *cabeca = (*cabeca)->proximo;
        if(*cabeca != nullptr)
        {
            (*cabeca)->anterior = nullptr;
        }
        delete temp;
        cout << "No removido." << endl;
        return;
    }

    //Procura o no a ser removido a ser removido na lista
    Node* atual = *cabeca;
    while(atual != nullptr && atual->dado != dado)
    {
        atual = atual->proximo;
    }

    //Se o n� foi encontrado, remove-o da lista
    if(atual != nullptr)
    {
        if(atual->anterior != nullptr)
        {
            atual->anterior->proximo = atual->proximo;
        }
        if(atual->proximo != nullptr)
        {
            atual->proximo->anterior = atual->anterior;
        }
        delete atual;
        cout << "No removido." << endl;
    }
    else
    {
        cout << "No nao encontrado na lista." << endl;
    }
}

//Fun��o para imprimir os elementos da lista
void imprimiLista(Node* cabeca)
{
    cout << "Elementos da lista: ";
    while(cabeca != nullptr)
    {
        cout << cabeca->dado << " ";
        cabeca = cabeca->proximo;
    }
    cout << endl;
}

//Funcao principal
int main()
{
    Node* cabeca = nullptr;//Ponteiro para o inicio da lista

    //Inserindo alguns n�s no inicio da lista
    inserirNoInicio(&cabeca, 3);
    inserirNoInicio(&cabeca, 5);
    inserirNoInicio(&cabeca, 7);

    //imprimindo os elementos da lista
    imprimiLista(cabeca);

    //removendo um n� da lista
    removerNo(&cabeca, 5);

    //Imprimindo os elementos da lista ap�s a remo��o
    imprimiLista(cabeca);
}
