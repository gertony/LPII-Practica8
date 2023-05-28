#include <iostream>

using namespace std;

class Empleado {
public:
    virtual double calcularSalario() {
        return 0.0;
    }
};

class EmpleadoTiempoCompleto : public Empleado {
public:
    double calcularSalario() {
        double salarioPorHora = 350.0;
        int horasTrabajadas = 8;
        return salarioPorHora * horasTrabajadas;
    }
};

class EmpleadoMedioTiempo : public Empleado {
public:
    double calcularSalario() {
        double salarioPorHora = 350.0;
        int horasTrabajadas = 4;
        return salarioPorHora * horasTrabajadas;
    }
};

int main() {
    EmpleadoTiempoCompleto empleado1;
    EmpleadoMedioTiempo empleado2;

    cout<<"Salario del empleado a tiempo completo: S/."<<empleado1.calcularSalario()<<endl;
    cout<<"Salario del empleado a medio tiempo: S/."<<empleado2.calcularSalario()<<endl;

    return 0;
}
