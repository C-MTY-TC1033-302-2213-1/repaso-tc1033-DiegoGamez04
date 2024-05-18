#ifndef Punto_hpp
#define Punto_hpp

#include <stdio.h>
#include <string>
#include <math.h>
class Punto{
    private:
    double x;
    double y;


public:
    // Constructores
    Punto();
    Punto(double _x, double _y);

    // Metodos Modificadores - setters
    void setX(double _x);
    void setY(double _y);

    //Metodos de acceso - getters
    double getX();
    double getY();

    // Otros metodos
    double calculaDistancia(Punto p2);
    string str();



};

#endif /* Punto_hpp */