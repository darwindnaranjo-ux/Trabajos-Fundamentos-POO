#include <iostream>

static int edad = 20;

static const float alturaMaxima = 2.00;

class Persona(){

private:
    int edad;
    float altura;
    char sexo;
    std::string nombre;


public:
    //constructor sin parametros de entrada
    Persona(){
        this->edad = 18;
        this->altura = 1.65;
        this->sexo = 'M';
        this->nombre = "Ash Ketchum";

    }
    //constructor con edad por deficion de usuario
    Persona(int edad){
        this->edad = edad;
        this->altura = 1.65;
        this->sexo = 'M';
        this->nombre = "Ash Ketchum";
    }
    Persona(int edad, float altura){
        this->edad = edad;
        this->altura = altura;
        this->sexo = 'M';
        this->nombre = "Ash Ketchum";
    }

    //constructor con parametros de entrada
    Persona(int edad, float altura, char sexo){
        this->edad = edad;
        this->altura = altura;
        this->sexo = sexo;
    }

    Persona(int edad, float altura, char sexo, std::string nombre){
        this->edad = edad;
        this->altura = altura;
        this->sexo = sexo;
        this->nombre = nombre;
    }


    //metodos get para obtener los valores de los atributos
    void contar(){
        std::cout << "Estoy en recursion infinita" << std::endl;
        contar(); //recursion infinita 
    }
    int getEdad(){
        return this->edad;
    }   

    float getAltura(){
        return this->altura;
    }

    char getSexo(){
        return this->sexo;
    }

    std::string getNombre(){
        return this->nombre;
    }


    //Destructor
    ~Persona(){
        std::cout << "El objeto de nombre " << this->nombre << " ha sido destruido." << std::endl;
    }
};


int main(){

    Persona Ash;
    Persona Misty(25);
    Persona Brock(30, 1.80, 'M');
    Persona Sabrina(28, 1.70);
    Persona Gary(32, 1.75, 'M', "Gary Oak");

    std::cout << "La edad de Misty es: " << Misty.getEdad() << std::endl;
    std::cout << "La altura de Brock es: " << Brock.getAltura()
    std::cout << "El sexo de Ash es: " << Ash.getSexo() << std::endl;
    std::cout << "La edad de Sabrina es: " << Sabrina.getEdad() << std::endl;
    std::cout << "El nombre de Gary es: " << Gary.getNombre() << std::endl;

    //Gary.~Persona();
    //Marco.contar();
    
    return 0;
}