#include <iostream>
#include <cmath>
#include <iomanip>

int main(void) {
    
    using namespace std;


    float A = 5.0;
    float B = 3.0;

    float soma = A + B;
    float subtracao = A - B;
    float multiplicacao = A * B;
    float divisao = (A / B);
    
    

    
    cout << "Soma = " << fixed << setprecision(1) << soma << endl;
    cout << "Subtração = " << fixed << setprecision(1) << subtracao << endl;
    cout << "Multiplicação = " << fixed << setprecision(1) << multiplicacao << endl;
    cout << "Divisão = " << fixed << setprecision(1) << divisao << endl;
    
     

    return 0;
}