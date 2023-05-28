#include <iostream> 
using namespace std;

class Vehiculo{
    public:
        virtual void acelerar(){
            cout<<"Acelerando el vehiculo"<<endl;
        }
};
class Coche : public Vehiculo{
    public:
        void acelerar(){
            cout<<"Acelerando el coche"<<endl;
        }
        void encenderLuces(){
            cout<<"Encendiendo luces del coche"<<endl;
        }
};
class Motocicleta : public Vehiculo{
    public:
        void acelerar(){
            cout<<"Acelerando la motocicleta"<<endl;
        }
};
int main(){
    Coche coche1;
    cout<<"Clase Base Vehiculo de Coche:"<<endl;
    coche1.Vehiculo::acelerar();
    cout<<"Clase Derivada Coche:"<<endl;
    coche1.acelerar();
    Motocicleta moto1;
    cout<<"Clase Base Vehiculo de Motocicleta:"<<endl;
    moto1.Vehiculo::acelerar();
    cout<<"Clase Derivada Motocicleta:"<<endl;
    moto1.acelerar();
    cout<<"Clase Derivada Coche:"<<endl;
    coche1.encenderLuces();
    cout<<"La clase Motocicleta no tiene el metodo encenderLuces()"<<endl;
    return 0;
}
