/*
Complexidade -> PIOR CASO: O(n^2) QUADRÁTICO
*/
#include <iostream>
#define tamanho 50
using namespace std;

void bubbleSort(int A[]){
    for(int i=0; i<tamanho; i++){
        for(int j=i+1; j<tamanho; j++){
            if(A[i] > A[j]){
                int aux = A[i];
                A[i] = A[j];
                A[j] = aux;
            }
        }
    }
    cout << "vetor ordenado: \n";
    for(int i=0; i<tamanho; i++){
        cout << A[i] << "\t";
    }
}
int main(){

int A[tamanho] = {10,11,34,56,76,2,0,7,18,10,1,9,4,57,8,9,55,67,54,23,12,15,36,88,90,35,21,43,23,12,7,1,1,3,3,4,56,65,32,12,78,53,45,54,13,23,46,67,87};
bubbleSort(A);

return 0;
}