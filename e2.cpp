
#include<iostream>
#include<string>
using namespace std;

class Reproductor{
public:
    int estado = 0;
    virtual void reproducir() = 0;
    virtual void pausar() = 0;
    virtual void detener () = 0;
};

class ReproductorMP3:public Reproductor{
public:
    void reproducir(){
        estado = 1;
    }
    void pausar(){
        estado = 2;
    }
    void detener(){
        estado = 0;
    }
    void mostrarEstado(){
        switch(estado){
            case 0:
                cout<<"La música esta detenida"<<endl;
                break;
            case 1:
                cout<<"La música esta reproduciendose"<<endl;
                break;
            case 2:
                cout<<"La música esta pausada"<<endl;
                break;
        }
    }
};
int main(){

    ReproductorMP3 r1;
    r1.mostrarEstado();
    r1.reproducir();
    r1.mostrarEstado();
    r1.pausar();
    r1.mostrarEstado();
    r1.detener();
    r1.mostrarEstado();

    return 0;
}
