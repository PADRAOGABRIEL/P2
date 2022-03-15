#include <iostream>
using namespace std;

int main(){
    int num, guardamaior = 0;

    cout << "digite um numero 1: " << endl;
    cin >> num;

    guardamaior = num;

    for(int i = 1; i<10; i++){
        cout << "Digite o " << i+1 << " numero" << endl;
        cin >> num;

        if(num > guardamaior){
            guardamaior = num;
        }
    }
    cout << "O maior numero e: " << guardamaior << endl;
}