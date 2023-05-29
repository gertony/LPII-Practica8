#include <iostream>

using namespace std;

class Forma {
protected:
    float perimetro;

public:
    Forma() : perimetro(0.0) {}
    virtual void calcularPerimetro() = 0;
};

class Triangulo : public Forma {
private:
    float lado1, lado2, lado3;

public:
    Triangulo(float lado1, float lado2, float lado3) {
        this->lado1 = lado1;
        this->lado2 = lado2;
        this->lado3 = lado3;
    }

    void calcularPerimetro() {
        perimetro = lado1 + lado2 + lado3;
        cout << "Perímetro del triángulo: " << perimetro << endl;
    }
};

class Rectangulo : public Forma {
private:
    float base, altura;

public:
    Rectangulo(float base, float altura) {
        this->base = base;
        this->altura = altura;
    }

    void calcularPerimetro() {
        perimetro = (2 * base) + (2 * altura);
        cout << "Perímetro del rectángulo: " << perimetro << endl;
    }
};

class Circulo : public Forma {
private:
    float radio;

public:
    Circulo(float radio) {
        this->radio = radio;
    }

    void calcularPerimetro() {
        perimetro = 2 * 3.14159265 * radio;
        cout << "Perímetro del círculo: " << perimetro << endl;
    }
};

int main() {
    Forma* forma;
    string cont;
    int opc;
    float b, h, ra;
    cont = "s";
    while (cont == "S" || cont == "s") {
        cout << "Calcular perímetro de una figura" << endl;
        cout << "------------------------" << endl;
        cout << "1. Rectángulo" << endl;
        cout << "2. Círculo" << endl;
        cout << "Elija una opción: ";
        cin >> opc;

        switch (opc) 
        {
            case 1: {
                cout << "Ingrese la base: ";
                cin >> b;
                cout << "Ingrese la altura: ";
                cin >> h;

                forma = new Rectangulo(b, h);
                forma->calcularPerimetro();
                break;
            }

            case 2: {
                cout << "Ingrese el radio: ";
                cin >> ra;

                forma = new Circulo(ra);
                forma->calcularPerimetro();
                break;
            }
        }

        cout << "Desea continuar S/N: ";
        cin >> cont;
        delete forma;
    }

    return 0;
}
