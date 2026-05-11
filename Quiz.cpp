#include <iostream>
#include <string>

using namespace std;


class producto{

    public:
    string nombre;
    int precio;
    
}

int main(){

    int total;
    int cantidad;


    cout<<"Ingrese el nombre del producto: ";
    cin>>producto.nombre;
    
    cout<<"Ingrese la cantidad: ";
    cin>>cantidad;

    int total = producto.precio * cantidad;
    cout<<"El total a pagar es: " << total;

}
