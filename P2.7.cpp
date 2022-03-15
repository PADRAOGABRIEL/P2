#include <iostream>
#include <string.h>

using namespace std;

int qntdletras(char string[]){
int numletras=0,i;
int menor=0;

for(i=1;string[numletras]!=0;i++){
    ++numletras;
}
return numletras;
}
int main(){
char nome[40];
char menor[40];
int i=0;
strcpy(menor,nome);

for(i=1;i<=10;i++){
    cout << "Insira a " << i << " string (10 strings no total)" << endl;
    cin >> nome;
    if(qntdletras(nome) < qntdletras(menor)){
    strcpy(menor,nome);
    }
}
cout <<  "menor string :: " << menor << "\n";

return 0;
}