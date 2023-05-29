#include <iostream>

using namespace std;

class Figura 
{
    public:
        virtual void dibujar() = 0;
        virtual double calcularArea() = 0;
};

class Circulo : public Figura 
{
    private:
        double radio;

    public:
        Circulo(double radio) 
        {
            this->radio = radio;
        }

        void dibujar() 
        {
            cout << "Dibujando un círculo" << endl;
        }

        double calcularArea() 
        {
            return 3.14159 * radio * radio;
        }
};

class Rectangulo : public Figura 
{
    private:
        double base;
        double altura;

    public:
        Rectangulo(double base, double altura) 
        {
            this->base = base;
            this->altura = altura;
        }

        void dibujar() {
            cout << "Dibujando un rectángulo" << endl;
        }

        double calcularArea() 
        {
            return base * altura;
        }
    };

class Triangulo : public Figura 
{
    private:
        double base;
        double altura;

    public:
        Triangulo(double base, double altura) {
            this->base = base;
            this->altura = altura;
        }

        void dibujar() {
            cout << "Dibujando un triángulo" << endl;
        }

        double calcularArea() {
            return 0.5 * base * altura;
        }
};

int main() {

    Figura* circulo = new Circulo(5.0);
    Figura* rectangulo = new Rectangulo(4.0, 6.0);
    Figura* triangulo = new Triangulo(3.0, 2.0);

    circulo->dibujar();
    cout << "Área del círculo: " << circulo->calcularArea() << endl;

    rectangulo->dibujar();
    cout << "Área del rectángulo: " << rectangulo->calcularArea() << endl;

    triangulo->dibujar();
    cout << "Área del triángulo: " << triangulo->calcularArea() << endl;

    delete circulo;
    delete rectangulo;
    delete triangulo;

    return 0;
}
