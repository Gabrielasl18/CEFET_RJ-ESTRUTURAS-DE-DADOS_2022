#include <iostream>
#define tamanho 20
using namespace std;

void intercala(int vetor[],int inicio,int fim,int meio){
    int i,aux[tamanho],posLivre = inicio,inicioA1 = inicio,inicioA2 = meio+1;

    while(inicioA1 <= meio && inicioA2 <=fim){
        if(vetor[inicioA1] > vetor[inicioA2]){
            aux[posLivre] = vetor[inicioA2];
            inicioA2++;
        }else{
            aux[posLivre] = vetor[inicioA1];
            inicioA1++;
        }
        posLivre++;
    }
    for(i = inicioA1;i<=meio;i++){
        aux[posLivre] = vetor[i];
        posLivre++;
    }
    for(i = inicioA2;i<=fim;i++){
        aux[posLivre] = vetor[i];
        posLivre++;
    }
    for(i = inicio;i<=fim;i++){
        vetor[i] = aux[i];
    }
}
void ordenar(int vetor[],int inicio,int fim){
    int meio;
    if(inicio < fim){
        meio = (inicio + fim)/2;
        ordenar(vetor,inicio,meio);
        ordenar(vetor,meio+1,fim);
        intercala(vetor,inicio,fim,meio);
    }
}
void listarElementos(int vetor[]){
    cout << "Elementos da lista: " << endl;
    for(int j=0;j<tamanho;j++){
        cout << vetor[j] << "\t";
    }
    cout << endl;
}
void verificarElemento(int vetor[]){
    int k=0, buscado;
    bool achei = false;
    cout << "Qual elemento deseja buscar? ";
    cin >> buscado;
    for(k=0;k<tamanho;k++){
        if(vetor[k] == buscado){
            achei = true;
            break;
        }
    }
    if(achei == true){
        cout << "Elemento encontrado na posicao: " << k << endl;
    }else{
        cout << "Elemento nao encontrado na lista." << endl;
    }
    cout << endl;
}
int main(){
    int i=0,op,aleatorio[tamanho]={0};
    for(i=0;i<tamanho;i++){
        aleatorio[i] = rand() % 100;
    }
    for(i=0;i<tamanho;i++){
        cout << aleatorio[i] << endl;
    }
    do{
    cout << "1 - Ordenar vetor no pior caso O(n log n)\n2 - Verificar se um elemento existe na lista\n3 - Listar todos os elementos da lista.\nDigite a opcao que deseja: ";
    cin >> op;
        switch(op){
            case 1: ordenar(aleatorio,0,tamanho);break;
            case 2: verificarElemento(aleatorio);break;
            case 3: listarElementos(aleatorio);break;
        }
    }while(op!=0);
return 0;
}