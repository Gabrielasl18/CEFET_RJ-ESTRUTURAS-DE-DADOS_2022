/*
Complexidade -> PIOR CASO: O(n^2) QUADRÁTICO
*/
#include <iostream>
#define tamanho 10
using namespace std;

void insertionSort(int C[]){
    int j=0,aux;
    for(int i=1;i<10;i++){
    aux = C[i];
    j = i - 1;
        while(j>=0 && aux < C[j]){
        C[j+1] = C[j];
        j--;    
        }
    C[j+1] = aux;
    }
    cout << "vetor Ordenado: "; 
    for(int i=0;i<10;i++){
    cout << C[i] << "\t";
    }
    cout << "\n";
}
int main(){
int C[tamanho] = {10,11,34,56,76,2,0,7,18,10};
insertionSort(C);
return 0;
}