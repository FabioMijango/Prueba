#include <iostream>
#include <cmath>

using namespace std;

int main (void)
{
    cout << " Calular el area y volumen de un circulo. " << endl;
    float radio = 0 ;
    cout << "Digite el radio del circulo:" ;
    cin >> radio;

    float area = 4*M_PI*pow(radio, 2) ;
    float volumen = (4.0/3)*M_PI*pow(radio, 3);

    cout << "El area del circulo es: "<< area ;
    cout << ", Y el volumen es: " << volumen << endl;
    cout << "Valor de Pi: " << M_PI << endl;

    return 0;
}