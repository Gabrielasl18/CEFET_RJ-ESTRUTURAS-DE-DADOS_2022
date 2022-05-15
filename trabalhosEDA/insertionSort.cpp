#include<iostream>

using namespace std;

void insertionSort(int vetor[]){
    int j=0,aux;
    for(int i=1;i<10;i++){
    aux = vetor[i];
    j = i - 1;
        while(j>=0 && aux < vetor[j]){
        vetor[j+1] = vetor[j];
        j--;    
        }
    vetor[j+1] = aux;
    }
    cout << "vetor Ordenado: "; 
    for(int i=0;i<10;i++){
    cout << vetor[i] << "\t";
    }
    cout << "\n";
}
int main(){

int vetor[10] = {5,76,34,12,9,0,3,5,10,2};
insertionSort(vetor);
    
return 0;
}