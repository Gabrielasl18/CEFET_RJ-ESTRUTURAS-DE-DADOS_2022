#include<iostream>
#define T 10
using namespace std;

void troca(int * x, int * y){
    int aux;
    aux = * x;
    *x = *y;
    *y = aux;
}
void quickSort(int vetor[],int inicio,int fim){
int i,j,aux;
    if(fim - inicio <2){
        if(fim - inicio == 1){
            if(vetor[inicio] > vetor[fim]){
                troca(&vetor[inicio], &vetor[fim]);
            }
        }
    }else{
    i = inicio;
    j = fim;
    aux = vetor[inicio];
    while (j>i){
        i++;
        while(vetor[i] < aux){
            i++;
        }
         while(vetor[j] > aux){
            j--;
        }    
        if(j > i){
        troca(&vetor[i],&vetor[j]);
        }   
    }
troca(&vetor[inicio],&vetor[j]);
quickSort(vetor,inicio,j-1);
quickSort(vetor,j+1,fim);
}
}

int main(){
    int vetor[T] = {83,56,7,5,99,76,54,34,18,11};
    quickSort(vetor,0,T);
    cout << "ordem crescente: ";
    for(int i=0;i<7;i++){
    cout << vetor[i] << "\t";
    }  
    cout << "\n";
return 0;
}
