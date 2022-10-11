//
// Created by JOSUE DAVID on 11/10/2022.
//

#include "Paralelogramo.h"

Paralelogramo::Paralelogramo() {
    base1 = 0;
    altura1 = 0;
    nombreFigura = "Paralelogramo";
}
Paralelogramo::Paralelogramo(float base, float altura):Paralelogramo() {
    this->altura1 = altura;
    this->base1 = base;
}

void Paralelogramo::dibujarFigura() {
    cout << nombreFigura;
    cout <<"\n";
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 15; j++){
            if(i == 0 || i == 3 || j == 0 || j == 14){
                cout << "*";
            }else{
                cout << " ";
            }
        }
        cout << "\n";
    }
}

float Paralelogramo::calcularArea() {
    area = base1 * altura1;
    return area;
}

float Paralelogramo::calcularPerimetro() {
    perimetro = (base1 * 2) + (altura1 * 2);
    return perimetro;
}
