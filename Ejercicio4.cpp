#include <iostream>
using namespace std;

class Sumatoria {
private:
    int suma;
public:
    Sumatoria();  
    ~Sumatoria(); 
};

Sumatoria::Sumatoria() {
    int valor;
    suma = 0; 
    
    cout<<"Carga de valores (Ingresar 0 para finalizar)"<<endl;
    do {
        cout << "Ingrese un valor entero: "; cin>>valor;
        suma = suma + valor;
    } while (valor != 0);
}

Sumatoria::~Sumatoria() {
    cout<<"Resultados desde el Destructor"<<endl;
    cout<<"La suma total de los valores ingresados es: "<<suma<<endl;
}

int main() {
	
    Sumatoria sum1;
    
    return 0; 
}
