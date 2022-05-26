#include <iostream>
#define tamanho 10
#define tamanho2 10
#define tamanho3 20
using namespace std;

void intercalarElementos(int A[],int B[],int C[]){
    int j=0;
    for(int i=0;i<tamanho3 && j<tamanho2 && j<tamanho3;i+=2){
        C[i] = A[j];
        C[i+1] = B[j];
        j++;
    }
}
void busca(int C[]){
    int buscado,i=0;
    bool achei = false;
    cout << "qual número deseja buscar? ";
    cin >> buscado;
    while(i<tamanho3 && achei == false){
        if(C[i] == buscado)
            achei=true;
        else
            i++;
    }
    if(achei == true){
        cout << "elemento encontrado na posição: " << i << "\n";
    }else
        cout << "elemento não encontrado no vetor.";
}
void remover(int A[]){
  A[0] = 0;
  A[1] = 0;
}
void mostrar(int A[],int B[],int C[]){
    cout << "vetor intercalado ";
    for(int i=0;i<tamanho3;i++){
        cout << C[i] << "\t";
    }
cout << "\n";
}
void busca(int C[]){
    int buscado,i=0;
    bool achei = false;
    cout << "qual número deseja buscar? ";
    cin >> buscado;
    while(i<tamanho3){
        if(C[i] == buscado)
            achei=true;
        else
            i++;
    }
    if(achei == true){
        cout << "elemento encontrado na posição: " << i;
    }else
        cout << "elemento não encontrado no vetor.";
}
int main(){
int A[tamanho] = {10,4,3,0,7,1,11,32,17,6},B[tamanho2] = {99,45,32,21,11,8,3,0,1,18},C[tamanho3];
int resposta;
do{
cout << "qual opcao deseja usar? \n0 - sair \n1 - intercalar os vetores A e B \n2 - mostrar elementos do vetor C \n3 - buscar elementos no vetor C \n4 - remover os 2 primeiros elementos do vetor A\n";
cin >> resposta; 
  switch(resposta){
    case 1: intercalarElementos(A,B,C);
    break;
    case 2: mostrar(A,B,C);
    break;
    case 3: busca(C);
    break;
    case 4: remover(A);
  }
}while(resposta!=0);

return 0;
}
