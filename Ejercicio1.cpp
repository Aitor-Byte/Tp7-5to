#include <iostream>
using namespace std;

class Alumno {
private:
    char nombre[40];
    int edad;
public:
    Alumno(); 
    void imprimir();
    void mayoredad();
};
Alumno::Alumno() {
    cout<<"Ingrese el nombre del alumno: "; 
	cin.getline(nombre, 40);
    cout<<"Ingrese la edad del alumno: "; cin>>edad;
}
void Alumno::imprimir() {
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Edad: "<<edad<<endl;
}
void Alumno::mayoredad() {
    if(edad >= 18) {
        cout<<"El alumno es mayor de edad."<<endl;
    } 
	else {
        cout<<"El alumno no es mayor de edad."<<endl;
    }
}

int main() {
	
    Alumno alumno1;
    
    cout<<"Datos del Alumno"<<endl;
    alumno1.imprimir();
    alumno1.mayoredad();
    
    return 0;
}
