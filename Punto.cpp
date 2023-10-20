#include <iostream>
#include "Punto.h"

using namespace std;

int main() {
    Punto p;
    Punto *ptr;

    ptr = &p;

    p.setX(10);
    p.setY(20);

    p.print(); 

    ptr->setX(30);
    ptr->setY(40);
    ptr->print(); 
}