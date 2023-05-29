#include <iostream>
#include <cmath>

using namespace std;

class Figura
{
    public: 
        float area;
        Figura() : area(0.0) { }

        void imprimirArea() {
            cout << "Area: " << area << endl;
        }

        virtual void calcularArea() = 0;

};

class Circulo : public Figura
{
    private:
        float radio;
    
    public:
        Circulo(float radio) 
        {
            this->radio = radio;
        }

        virtual void calcularArea()
        {
            area = (radio*radio)*3.14159265;
        }
};

class Rectangulo : public Figura
{
    protected:
        float base;
        float altura;

    public:
        Rectangulo (float base, float altura)
        {
            this->base = base;
            this->altura = altura;
        }

        virtual void calcularArea()
        {
            area = base*altura;
        }
};

class Triangulo : public Figura
{
    private:
        float base;
        float altura;
    
    public:
        Triangulo(float base, float altura)
        {
            this->base = base;
            this->altura = altura;
        }

        virtual void calcularArea()
        {
            area = (base*altura) / 2;
        }
};

class Cuadrado : public Figura
{
    private:
        float lado;
    
    public:
        Cuadrado(float lado)
        {
            this->lado = lado;
        }

        virtual void calcularArea()
        {
            area = lado*lado;
        }
};

class Pentagono : public Figura
{
    private:
        float lado;
        float apotema;
    
    public:
        Pentagono(float lado, float apotema)
        {
            this->lado = lado;
            this->apotema = apotema;
        }

        virtual void calcularArea()
        {
            area = (((5*lado)*apotema)/2);
        }
};

int main()
{
    Figura* figura;
    string cont;
    int opc;
    float b,h,l,a;
    float ra;
    cont = "s";
    while(cont == "S" or cont == "s")
    {
        cout << "Calcular area de una Figura" << endl;
        cout << "------------------------" << endl;
        cout << "1. Triangulo" << endl;
        cout << "2. Rectangulo" << endl;
        cout << "3. Circulo" << endl;
        cout << "4. Pentagono" << endl;
        cout << "5. Cuadrado" << endl;
        cout << "Elija una opcion: ";
        cin >> opc;

        switch (opc)
        {
            case 1:
            {
                cout << "Ingrese la base: ";
                cin >> b;
                cout << "Ingrese la altura: ";
                cin >> h;  

                figura = new Triangulo(b,h);
                figura->calcularArea();
                figura->imprimirArea();
                break;
            }

            case 2:
            {
                cout << "Ingrese la base: ";
                cin >> b;
                cout << "Ingrese la altura: ";
                cin >> h;

                figura = new Rectangulo(b,h);
                figura->calcularArea();
                figura->imprimirArea();
                break;
            }

            case 3:
            {
                cout << "Ingrese el radio: ";
                cin >> ra;

                figura = new Circulo(ra);
                figura->calcularArea();
                figura->imprimirArea();
                break;
            }

            case 4:
            {
                cout << "Ingrese el lado: ";
                cin >> l;
                cout <<"Ingrese el apotema: ";
                cin >> a;

                figura = new Pentagono(l,a);
                figura->calcularArea();
                figura->imprimirArea();
            }

            case 5:
            {
                cout << "Ingrese el lado: ";
                cin >> l;

                figura = new Cuadrado(l);
                figura->calcularArea();
                figura->imprimirArea();
            }
        }

        cout << "Desea continuar S/N: ";
        cin >> cont;
        delete figura;
    }
    
    return 0;
}