#include <iostream>
using namespace std;

int main(){

    int matriz[10][10];
    int l, c, k1, k2;


    for(l = 0; l<10; l++){
        for(c = 0; c<10; c++){
            cout << "insira o valor de ["<< l+1 << "][" << c+1 << "]" << endl;
            cin >> matriz[c][l]; 
        }
    }

    for(int l1 = 0; 1<10; l1++){
        for(int c1 = 0; c1<10; c1++){
            if(l1>c1 && matriz[l1][c1]!=0){
                k1++;
            }
        }
    }

    for(int l2 = 0; l2<10; l2++){
        for(int c2 = 0; c2<10; c2++){
            if(l2<c2 && matriz[l2][c2]!=0){
                k2++;
            }
        }
    }

    if(k1 == 0){
        cout << "Matriz triangula inferior" << endl;
    }
    if(k2 == 0){
        cout << "Matriz triangular superior" << endl;
    }
    else{
        cout << "Matriz nao triangular" << endl;
    }


}