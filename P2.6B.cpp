#include <iostream>
using namespace std;

struct atletas{
    string nome;
    float peso;
    float altura;
    float imc;
}
atletas_acad[100];

int main(){

    atletas atletas_academia[100];

    for(int i = 0; i<100; i++){
        atletas_acad[i].imc = atletas_acad[i].peso / (atletas_acad->altura * atletas_acad->altura);
        cout << "o IMC do atleta " << i << "esta igual a: " << atletas_acad->imc << endl;
    }
}
