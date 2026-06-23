#include <iostream>
using namespace std;

class Operaciones {
private:
    int valor1;
    int valor2;
public:
    Operaciones(int x, int y);
    void sumar();
    void restar();
    void multiplicar();
    void dividir();
};
Operaciones::Operaciones(int x, int y) {
    valor1 = x;
    valor2 = y;
}
void Operaciones::sumar() {
    float suma = valor1 + valor2;
    cout<<"La suma es: "<<suma<<endl;
}
void Operaciones::restar() {
    float resta = valor1 - valor2;
    cout<<"La resta es: "<<resta<<endl;
}

void Operaciones::multiplicar() {
    float producto = valor1 * valor2;
    cout<<"La multiplicacion es: "<<producto<<endl;
}
void Operaciones::dividir() {
        float division = valor1 / valor2;
        cout<<"La division es: "<<division<<endl;
    }


int main() {
    int num1, num2;
    
    cout<<"Ingrese el primer valor: "; cin>>num1;
    cout<<"Ingrese el segundo valor: "; cin>>num2;
    
    Operaciones op(num1, num2);
    
    cout<<"Resultados"<<endl;
    op.sumar();
    op.restar();
    op.multiplicar();
    op.dividir();
    
    return 0;
}
