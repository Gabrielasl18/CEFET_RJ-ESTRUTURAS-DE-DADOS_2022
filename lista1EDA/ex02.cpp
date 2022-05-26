/*
Complexidade -> PIOR CASO: O(n^2) QUADRÁTICO
*/
#include <iostream>
#define tamanho 20
using namespace std;

void selectionSort(int B[]){
    int aux,menor;
    for(int i=0; i<tamanho-1; i++){
        menor = i;
        for(int j = i+1; j<tamanho; j++){
            if(B[menor] > B[j]){
                menor = j;
            }
        }
        aux = B[i];
        B[i] = B[menor];
        B[menor] = aux;
    }
    cout << "vetor ordenado: "; 
    for(int i=0; i<tamanho; i++){
        cout << B[i] << "\t";
    }
}
int main(){

int B[tamanho] = {10,11,34,56,76,2,0,7,18,10,1,9,4,57,8,9,55,14,43,60};
selectionSort(B);
return 0;
}