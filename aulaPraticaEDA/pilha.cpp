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
    if(!listaVazia()){ 
    noPtr p = topo;
        while(p!=NULL){
        cout << p << endl;
        }
    }
     
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
        cin >> op;
        switch(op){
            case 1: push();break;
            case 2: pop();break;
            case 3: listar();break;
        }
    }while(op!=0);

return 0;
}
