#include <iostream>
#define T 7
using namespace std;

void organiza(int vetor[],int fim){
    int j=0,aux;
    for(int i=0;i<fim;i++){
    aux = vetor[i];
    j = i - 1;
        while(j>=0 && aux < vetor[j]){
        vetor[j+1] = vetor[j];
        j--;
        }
    vetor[j+1] = aux;
    }
}
void buscaBinaria(int vetor[],int buscado,int inicio, int fim){
    int meio = (inicio + fim)/2;
    if(buscado == vetor[meio]){
        cout << buscado << " esta na posicao:" + meio+1;
        cout << "\n";
    }else if(buscado<vetor[meio])
    buscaBinaria(vetor,buscado,inicio,meio);
    else{
        buscaBinaria(vetor,buscado,meio+1,fim);
    }
}
int main(){
    int vetor[7]={8,9,0,1,4,5,6},procurado;
    cout << "entre com o numero que deseja buscar: ";
    cin >> procurado;
    organiza(vetor,T);
    buscaBinaria(vetor,procurado,0,T);

return 0;
}