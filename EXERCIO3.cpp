#include <iostream>

using namespace std;

int main(){
    int media;
    cout << "Digite a sua nota:";
    cin  >> media;
    media > 6 ? cout << "Aprovado" : cout << "Recuperação";

    return 0;
}
