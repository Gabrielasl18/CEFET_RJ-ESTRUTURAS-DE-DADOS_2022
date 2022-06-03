#include <iostream>
using namespace std;

struct no{
    int info;
    struct no * prox;
};

typedef struct no *noPtr;
noPtr topo = NULL;

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
// void pop(){
//     noPtr p = topo;
//     if(!listaVazia()){
//         topo = topo->prox;
//         delete(p);
//         cout << "\nO elemento foi retirado da pilha." << endl;
//     }
//     else cout << "\nLista vazia!" <<;
// }
int main(){
    int op;
    do{
        cin >> op;
        switch(op){
            case 1: push();break;
            // case 2: pop();break;
        }
    }while(op!=0);

return 0;
}