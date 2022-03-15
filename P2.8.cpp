#include <iostream>
using namespace std;

int main() {

    int matriz[10][10];
    int l, c;

    for(l = 0; l<10; l++){
        for(c = 0; c<10; c++){
            cout << "insira o valor de ["<< l+1 << "][" << c+1 << "]" << endl;
            cin >> matriz[c][l]; 
        }
    }

    for(l = 0; l<10; l++){
        for(c = 0; c<10; c++){
            if(matriz[l][c] == matriz[c][l]){
                cout << "igual" << endl;
            }
            else{
                cout << "a matriz nao e simetrica!" << endl;
                return 0;
            }
        }
    }
    cout << "A matriz e simetrica!";
}