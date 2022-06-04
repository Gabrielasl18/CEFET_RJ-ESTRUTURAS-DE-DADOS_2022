#include <iostream>
using namespace std;

struct no{
    int info;
    struct no * prox;
};

typedef struct no *noPtr;
noPtr topo = NULL;

bool listaVazia(){
    if(topo == NULL)
        return true;
    else 
        return false;
}
void listar(){
<<<<<<< HEAD
    noPtr p = topo;
    if(!listaVazia()){ 
        while(p!=NULL){
        cout << p << endl;
        p = p->prox;
        }
    }
=======
    if(!listaVazia()){ 
    noPtr p = topo;
        while(p!=NULL){
        cout << p << endl;
        p++;
        }
    }
     
>>>>>>> d51f36acdce93298362b4000e3bab910f2f5b638
}
void push(){
    noPtr p;
    int valor;

    p = new no;
    cout << "Digite o valor do elemento: ";
    cin >> valor;
    p->info = valor;
    p->prox = topo;
    topo = p;
}
void pop(){
    noPtr p = topo;
    if(!listaVazia()){
        topo = topo->prox;
        delete(p); //desalocar memória (deletando o endereço de memória, falando que ele está livre)
        cout << "\nO elemento foi retirado da pilha." << endl;
    }
    else cout << "\nLista vazia!" << endl;
}
int main(){
    int op;
    do{
        cout << "1 - push(inserir elementos)\n2 - pop(remover elementos)\n3 - listar(listar os elementos)\nDigite o numero da opcao desejada: ";
        cin >> op;
        switch(op){
            case 1: push();break;
            case 2: pop();break;
            case 3: listar();break;
        }
    }while(op!=0);

return 0;
}
