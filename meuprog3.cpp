#include <iostream>
#include <cmath>
#include <iomanip>

int main(void) {
    
    using namespace std;


    double A = 5.0;
    double B = 3.0;

    double soma = A + B;
    double subtracao = A - B;
    double multiplicacao = A * B;
    double divisao = A / B;
    double resto = fmod(A, B);

    cout << "Soma = " << fixed << setprecision(2) << soma << endl;
    cout << "Subtração = " << fixed << setprecision(2) << subtracao << endl;
    cout << "Multiplicação = " << fixed << setprecision(2) << multiplicacao << endl;
    cout << "Divisão = " << fixed << setprecision(2) << divisao << endl;
    cout << "Resto da Divisão = " << fixed << setprecision(2) << resto << endl;
    
   

    return 0;
}