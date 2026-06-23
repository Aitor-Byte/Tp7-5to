#include <iostream>
using namespace std;

class Empleado {
private:
    char nombre[40];
    float sueldo;
public:
    Empleado();
    void imprimir();
    void pagadeimpuestos();
};
Empleado::Empleado() {
    cout<<"Escriba el nombre del empleado: "; 
	cin.getline(nombre, 40);
    cout<<"Introduzca el sueldo: "; cin>>sueldo;
}
void Empleado::imprimir() {
    cout<<"Empleado: "<<nombre<<endl;
    cout<<"Sueldo: "<<sueldo<<endl;
}
void Empleado::pagadeimpuestos() {
    if(sueldo > 3000) {
        cout<<"Este empleado debe pagar impuestos"<<endl;
    } else {
        cout<<"Este empleado no debe pagar impuestos"<<endl;
    }
}

int main() {
    Empleado empleado1; 
    
    cout<<"Informacion"<<endl;
    empleado1.imprimir();
    empleado1.pagadeimpuestos();
    
    return 0;
}
