#include <iostream>
#include <cmath>
#include <iomanip>

int main(void) {
    
    using namespace std;


    float A = 5.0, B = 3.0, corrigirCasasDecimais;
    

    float soma = A + B;
    float subtracao = A - B;
    float multiplicacao = A * B;
    float divisao = (A / B);

    corrigirCasasDecimais = floorf(divisao * 10) / 10;
    
    

    
    cout << "Soma = " << fixed << setprecision(1) << soma << endl;
    cout << "Subtração = " << fixed << setprecision(1) << subtracao << endl;
    cout << "Multiplicação = " << fixed << setprecision(1) << multiplicacao << endl;
    cout << "Divisão = " << fixed << setprecision(1) << corrigirCasasDecimais << endl;
    
     

    return 0;
}