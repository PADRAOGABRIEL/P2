#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main(){
    char frase[40];
    int tamanho;
    int contavazio = 0;

    cout << "insira uma frase(string):" <<endl;
    cin.getline(frase,40);

    tamanho = strlen(frase);

    for(int i=0; i< tamanho; i++){
        if(frase[i] == ' '){
            contavazio++;
        }
    }

    cout << "o tamanho da string e igual a: " << tamanho - contavazio << endl;
}