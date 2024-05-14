# Clase Triangulo con composición con la clase Punto

<img alt="points bar" align="right" height="36" src="../../blob/status/.github/activity-icons/points-bar.svg" />


```c++
//
//  main.cpp
//  ComposicionTriangulo
//
//  Created by Ma. Guadalupe Roque Díaz de León on 18/05/23.
//
//  Diego Alejandro Gamez Campos A01199125

#include <iostream>
#include <iomanip> // for std::setprecision()
#include "Punto.hpp"
#include "Triangulo.hpp"

using namespace std;
int main( ){
    Punto p1{-5, -5}, p2{1, 3}, p3{4, -6};
    Punto p4{-2, -3}, p5{5, -4}, p6{-1,3};
    Punto p7{6, 7}, p8{6, 3}, p9{8,3};
    Triangulo tri1{p4,p5,p6}, tri2{p1, p2, p3}, tri3{p7, p8, p9};
    
    cout << "p_tri1 = " << tri1.perimetro() << endl;
    cout << "a_tri1 = " << tri1.area() << endl;
    cout << "p_tri2 = " << tri2.perimetro() << endl;
    cout << "a_tri2 = " << tri2.area() << endl;
    cout << "p_tri3 = " << tri3.perimetro() << endl;
    cout << "a_tri3 = " << tri3.area() << endl;
    cout << "Distancia = " << p1.calculaDistancia(p2)  << endl;
   
    return 0;
}

```
# CASO DE PRUEBA
```c++
/* Casos de Prueba
//  
Datos de entrada:
Ninguno

Datos de salida:

p_tri1 = 22.3734
a_tri1 = 21.5
p_tri2 = 28.5422
a_tri2 = 39
p_tri3 = 10.4721
a_tri3 = 4
Distancia = 10

```

2. Push your changes back to your assignment GitHub repo. Remember to try to make your commits atomic and your commit messages descriptive.

3. Wait a minute for the tests to run. Refresh the repo page to see if you have completed the exercise successfully.
You should score 100 marks if the test passes.
