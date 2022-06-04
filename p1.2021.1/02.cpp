#include <iostream>
#define tamanho 10
using namespace std;
int contadorConteiner;

struct conteiner{
    int cod;
    struct conteiner* prox;
};

typedef struct conteiner *noPtr;
noPtr topo = NULL;

bool listaVazia(){
    if(topo!=NULL){
        return false;
    }else{
        return true;
    }
}
void adicionarConteiner(){
    noPtr c;
    int valor;
    if(contadorConteiner!=tamanho){
        c = new conteiner;
        cout << "Digite o numero do conteiner > ";
        cin >> valor;
        c->cod = valor;
        c->prox = topo;
        topo = c;
        contadorConteiner++;
    }else{
        cout << "Limite maximo permitido.\n";
    }
}
void removerConteiner(){
    noPtr c = topo;
    if(listaVazia() == false){
        topo = topo->prox;
        delete(c);
        cout << "\nO conteiner :: " << c << " :: foi retirado dp patio." << endl;
        contadorConteiner--;
    }else{
        cout << "Patio vazio." << endl;
    }
}
void listarConteiner(){
    noPtr c = topo;
    if(listaVazia() == false){
        while(c!=NULL){
            cout << c << endl;
            c = c->prox;
        }
    }else{
        cout << "Patio vazio.\n";
    }
}
int main(){
    int op;
    do{
        cout << "1 - Adicionar Conteiners\n2 - Remover Conteiners\n3 - Listar Conteiners\nEscolha uma das opcoes: " << endl;
        cin >> op;
        switch(op){
            case 1: adicionarConteiner();break;
            case 2: removerConteiner();break;
            case 3: listarConteiner();break;
        }
    }while(op!=0);
return 0;
}