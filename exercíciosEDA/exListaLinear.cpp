#include <iostream>
#define tamanho 10
#define tamanho2 10
#define tamanho3 20
using namespace std;

void intercalarElementos(int A[],int B[],int C[]){
    int j=0;
    for(int i=0;i<tamanho3 && j<tamanho2 && j<tamanho3;i++){
        C[i] = A[j];
        C[i+1] = B[j];
        j++;
    }
}
void mostrar(int A[],int B[],int C[]){
    cout << "vetor intercalado";
    for(int i=0;i<tamanho3;i++){
        cout << C[i];
    }
}
int main(){
int A[tamanho] = {10,4,3,0,7,1,11,32,17,6},B[tamanho2] = {99,45,32,21,11,8,3,0,1,18},C[tamanho3];
intercalarElementos(A,B,C);
mostrar(A,B,C);
return 0;
}