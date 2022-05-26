#include <iostream>

using namespace std;

struct funcionarios{
    char nome[50];
    int matricula;
    double salario;
};
double media;

void ordenarSalario(funcionarios func[]){
    int menor,aux;
    for(int i=0;i<5-1;i++){
        menor = i;
        for(int j=i+1;j<5;j++){
            if(func[menor].salario > func[j].salario){
            menor = j;
            }
        }
        aux = func[i].salario;
        func[i].salario = func[menor].salario;
        func[menor].salario = aux;
    }
  cout << "salarios em ordem crescente: \n";
  for(int i=0;i<5;i++){
    cout << func[i].salario << "\n";
  }  
}
void somatorioSalarios(funcionarios func[]){
    double soma=0.0;
    for(int i=0;i<5;i++){
    soma += func[i].salario;
    }
    cout << "o somatório dos salários: R$" << soma << "\n";
    media = soma/5;
}
void matriculaMenorSalario(funcionarios func[]){
    int count=0;
    cout << "matriculas de funcionarios que recebem o salario menor que a media geral: \n";
    for(int j=0;j<5;j++){
        if(func[j].salario < media){
        cout << func[j].matricula << "\t";
        count++;
        }
    }
    cout << "\nquantidade de funcionarios que recebem o salario menor do que a media geral: " << count;
    cout << "\n";
}
int main(){

struct funcionarios func[5];
func[0].matricula = 2223343;
func[0].salario = 1788.85;
func[1].matricula = 2122287;
func[1].salario = 2550.75;
func[2].matricula = 1249955;
func[2].salario = 638.02;
func[3].matricula = 9987600;
func[3].salario = 1735.23;
func[4].matricula = 2348841;
func[4].salario = 988.75;
somatorioSalarios(func);
matriculaMenorSalario(func);
ordenarSalario(func);
  
return 0;
}