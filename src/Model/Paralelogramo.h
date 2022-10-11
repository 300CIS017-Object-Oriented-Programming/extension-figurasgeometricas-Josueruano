//
// Created by JOSUE DAVID on 11/10/2022.
//

#ifndef EJERCICIO_POLIMORFISMO_TRIANGULO_H
#define EJERCICIO_POLIMORFISMO_TRIANGULO_H
#include "FiguraGeometrica.h"


class Paralelogramo :public FiguraGeometrica{
private:
    float base1;
    float altura1;
public:
    Paralelogramo();
    virtual ~Paralelogramo() = default;
    Paralelogramo(float base, float altura);
    void dibujarFigura() override;
    float calcularArea() override;
    float calcularPerimetro() override;

};

#endif //EJERCICIO_POLIMORFISMO_TRIANGULO_H
