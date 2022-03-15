#include <iostream>
using namespace std;

struct Aluno{
    string nome;
    float p1;
    float p2;
    float media;
    string situacao;
}
aluno[100];

int main(){

    Aluno aluno[100];

    for(int i =0; i<100;i++){
    aluno[i].media = (aluno[i].p1 + aluno[i].p2)/2;
    if(aluno[i].media >= 6.0){
        aluno[i].situacao = "Aprovado";
        cout << aluno[i].situacao << endl;
    }
    else {
        aluno[i].situacao = "Reprovado";
        cout << aluno[i].situacao << endl;
    }
}