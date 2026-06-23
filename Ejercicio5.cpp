#include <iostream>
#include <string>
using namespace std;

class Estudiante {
private:
    string nombre;
    int edad;
    float calificacion;
public:
    void setnombre(string n);
    void setedad(int e);
    void setcalificacion(float c);
    
    string getnombre();
    int getedad();
    float getcalificacion();
};
void Estudiante::setnombre(string n) {
    nombre = n;
}
void Estudiante::setedad(int e) {
    edad = e;
}
void Estudiante::setcalificacion(float c) {
    calificacion = c;
}
string Estudiante::getnombre() {
    return nombre;
}

int Estudiante::getedad() {
    return edad;
}

float Estudiante::getcalificacion() {
    return calificacion;
}

int main() {
    Estudiante est1;
    
    est1.setnombre("Manuel Mata");
    est1.setedad(16);
    est1.setcalificacion(9.50);
    
    cout<<"Datos del Estudiante"<<endl;
    cout<<"Nombre: "<<est1.getnombre()<<endl;
    cout<<"Edad: "<<est1.getedad()<<endl;
    cout<<"Calificacion final: "<<est1.getcalificacion()<<endl;
    
    return 0;
}
