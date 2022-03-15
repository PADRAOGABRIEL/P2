#include <iostream>
#include <string>
using namespace std;

int main(){

    string palavra;
    cout << "Digite a string" << endl;
    getline(cin,palavra);
    for(int i = palavra.size();i>=0;i--){
        cout << palavra[i];
    }
    return 0;


}