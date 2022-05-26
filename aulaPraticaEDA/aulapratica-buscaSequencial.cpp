#include <iostream>

using namespace std;

int main(){
    int vetor[7]={7,4,5,0,10,1,9},buscado,i=0;
    bool achei = false;
    cout << "entre com o numero que deseja buscar: ";
    cin >> buscado;
        while(i<7 && achei == false){
            if(vetor[i] == buscado){    
            achei = true;
            }else{
            i++;
            } 
         }
         if(achei == true){
            cout << buscado << " achado na posicao > " << i << "\n";
         }
         else{
             cout << "elemento nao encontrado.";
         }
return 0;
}                                                                                                                                                                                
